#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <signal.h>
#include <string.h>
#include <cutils/properties.h>

#include "iptables_logger.h"

#ifdef DELAY_CHECK
#if 0 // logging full commnds on ship-version too.
int IsShipBuild()
{
	char chk_ship[PROPERTY_VALUE_MAX];

	property_get("ro.product_ship", chk_ship, "0");
	if (!strncmp(chk_ship, "true", 3))
		return 1;
	return 0;
}
#endif

void _pr_tag(char *_str, int *_p)
{
	time_t t = time(NULL);
	struct tm *time = localtime(&t);

	*_p = strftime(_str, lOGBUF_SIZE, "%Y%m%d-%T ", time);
	*_p += sprintf(_str + *_p, "[%d,%d]", getppid(), getpid());
}

float time_diff(struct timeval *start,
			struct timeval *end)
{
	long dsec = end->tv_sec - start->tv_sec;
	long dusec;

	if (end->tv_usec >= start->tv_usec) {
		dusec = end->tv_usec - start->tv_usec;
	} else {
		dusec = 1000000 + end->tv_usec - start->tv_usec;
		dsec--;
	}
    return (float)dsec + ((float)dusec / 1.0E6);
}

void __attribute__((noreturn)) __exit(int err)
{
	if (log_now && err) {
		//LOGE("!@iptables_log: command error exit (%d)", err);
		iptables_log(0, log_error);
		log_now = false;
	}

	exit(err);
}

void iptables_log(int argc, char *argv[])
{
#if 0 // logging full commnds on ship-version too.
	int ship = IsShipBuild();
#endif
	int i = 0, pos = 0, pr_log = 0;
	static char logbuf[lOGBUF_SIZE];

	static struct timeval start;
	struct timeval now;
	float timeDiff;

	int fnode = open(LOG_NODE_NAME, O_RDWR);
	if (fnode < 0)
		return;

	if (argc) {
		gettimeofday(&start, NULL);
		_pr_tag(logbuf, &pos);
		log_now = true;

		while (argc--) {
			if (pos + strlen(argv[i]) + 10 >= lOGBUF_SIZE) {
				pos += sprintf(logbuf + pos, " ...");
				break;
			}

			pos += snprintf(logbuf + pos,
					lOGBUF_SIZE - pos, " %s", argv[i++]);

#if 0 // logging full commnds on ship-version too.
			if (ship && i >= 5)
				break;
#endif
		}
	} else {
		gettimeofday(&now, NULL);
		timeDiff = time_diff(&start, &now);
		log_now = false;

		if (timeDiff > TIME_LIMIT) {
			pr_log = true;
			LOGE("!@iptables_log: cmd timeout (%.6fs): %s",
				timeDiff, logbuf);
		}

		if (argv[0][0] == 'e') {
			pr_log = true;
		}

		if (pr_log)
			LOGE("!@iptables_log: %s", logbuf);

		_pr_tag(logbuf, &pos);

		pos += sprintf(logbuf + pos, " %s (%.6fs)", argv[0], timeDiff);
	}

	logbuf[pos++] = '\n';
	//LOGE("!@iptables_log: cmd: %s", logbuf);

	write(fnode, logbuf, pos);
	close(fnode);
}
#endif
