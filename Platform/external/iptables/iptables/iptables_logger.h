#ifndef _IPTABLES_LOGGER
#define _IPTABLES_LOGGER

#include <android/log.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h>


#define TIME_LIMIT	3.0
#define LOG_NODE_NAME	"/proc/net/nf_history"
#define LOG_TAG		"IPTABLES"
#define lOGBUF_SIZE	256
#define LOGE( ... )	{}// disable log on thread exit, to prevent deadlock at liblog library
//#define LOGE( ... )	__android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

static int log_now;
static char *log_done[] = { "done", };
static char *log_error[] = { "error", };

#ifdef DELAY_CHECK
extern void iptables_log(int argc, char *argv[]);
extern void __attribute__((noreturn)) __exit(int err);
#else
inline static void iptables_log(int argc, char *argv[]) {}
inline static void __attribute__((noreturn)) __exit(int err) {exit(err);}
#endif
#endif