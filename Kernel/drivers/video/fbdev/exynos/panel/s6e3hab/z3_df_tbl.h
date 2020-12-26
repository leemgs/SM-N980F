/*
 * linux/drivers/video/fbdev/exynos/panel/s6e3hab/z3_dynamic_freq.h
 *
 * Copyright (c) 2018 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */


#ifndef __Z3_DYNAMIC_FREQ__
#define __Z3_DYNAMIC_FREQ__

#include "../df/dynamic_freq.h"

struct dynamic_freq_range z3_freq_range_850[] = {
	DEFINE_FREQ_RANGE(0, 0, 0, 0),
};

struct dynamic_freq_range z3_freq_range_900[] = {
	DEFINE_FREQ_RANGE(0, 0, 2, 0),
};

struct dynamic_freq_range z3_freq_range_1800[] = {
	DEFINE_FREQ_RANGE(0, 0, 3, 0),
};

struct dynamic_freq_range z3_freq_range_1900[] = {
	DEFINE_FREQ_RANGE(0, 0,	0, 0),
};

struct dynamic_freq_range z3_freq_range_wb01[] = {
	DEFINE_FREQ_RANGE(10562, 10665,	0, 0),
	DEFINE_FREQ_RANGE(10666, 10796,	2, 0),
	DEFINE_FREQ_RANGE(10797, 10838,	0, 0),
};

struct dynamic_freq_range z3_freq_range_wb02[] = {
	DEFINE_FREQ_RANGE(9662, 9776, 1, 0),
	DEFINE_FREQ_RANGE(9777, 9832, 2, 0),
	DEFINE_FREQ_RANGE(9833, 9938, 0, 0),
};

struct dynamic_freq_range z3_freq_range_wb03[] = {
	DEFINE_FREQ_RANGE(1162, 1234, 2, 0),
	DEFINE_FREQ_RANGE(1235, 1361, 0, 0),
	DEFINE_FREQ_RANGE(1362, 1475, 2, 0),
	DEFINE_FREQ_RANGE(1476, 1513, 0, 0),
};

struct dynamic_freq_range z3_freq_range_wb04[] = {
	DEFINE_FREQ_RANGE(1537, 1640, 0, 0),
	DEFINE_FREQ_RANGE(1641, 1738, 2, 0),
};

struct dynamic_freq_range z3_freq_range_wb05[] = {
	DEFINE_FREQ_RANGE(4357, 4458, 0, 0),
};

struct dynamic_freq_range z3_freq_range_wb07[] = {
	DEFINE_FREQ_RANGE(2237, 2331, 2, 0),
	DEFINE_FREQ_RANGE(2332, 2409, 0, 0),
	DEFINE_FREQ_RANGE(2410, 2496, 1, 0),
	DEFINE_FREQ_RANGE(2497, 2563, 2, 0),
};

struct dynamic_freq_range z3_freq_range_wb08[] = {
	DEFINE_FREQ_RANGE(2937, 3011, 0, 0),
	DEFINE_FREQ_RANGE(3012, 3088, 3, 0),
};


struct dynamic_freq_range z3_freq_range_td1[] = {
	DEFINE_FREQ_RANGE(0, 0, 0, 0),
};

struct dynamic_freq_range z3_freq_range_td2[] = {
	DEFINE_FREQ_RANGE(0, 0, 3, 0),
};

struct dynamic_freq_range z3_freq_range_td3[] = {
	DEFINE_FREQ_RANGE(0, 0, 0, 0),
};

struct dynamic_freq_range z3_freq_range_td4[] = {
	DEFINE_FREQ_RANGE(0, 0, 3, 0),
};

struct dynamic_freq_range z3_freq_range_td5[] = {
	DEFINE_FREQ_RANGE(0, 0, 0, 0),
};

struct dynamic_freq_range z3_freq_range_td6[] = {
	DEFINE_FREQ_RANGE(0, 0, 0, 0),
};

struct dynamic_freq_range z3_freq_range_bc0[] = {
	DEFINE_FREQ_RANGE(0, 0, 0, 0),
};

struct dynamic_freq_range z3_freq_range_bc1[] = {
	DEFINE_FREQ_RANGE(0, 0, 0, 0),
};

struct dynamic_freq_range z3_freq_range_bc10[] = {
	DEFINE_FREQ_RANGE(0, 0, 3, 0),
};


struct dynamic_freq_range z3_freq_range_lb01[] = {
	DEFINE_FREQ_RANGE(0, 231, 0, 0),
	DEFINE_FREQ_RANGE(232, 493, 2, 0),
	DEFINE_FREQ_RANGE(494, 599, 0, 0),
};

struct dynamic_freq_range z3_freq_range_lb02[] = {
	DEFINE_FREQ_RANGE(600, 854, 1, 0),
	DEFINE_FREQ_RANGE(855, 965, 2, 0),
	DEFINE_FREQ_RANGE(966, 1199, 0, 0),
};

struct dynamic_freq_range z3_freq_range_lb03[] = {
	DEFINE_FREQ_RANGE(1200, 1369, 2, 0),
	DEFINE_FREQ_RANGE(1370, 1623, 0, 0),
	DEFINE_FREQ_RANGE(1624, 1851, 2, 0),
	DEFINE_FREQ_RANGE(1852, 1949, 0, 0),
};

struct dynamic_freq_range z3_freq_range_lb04[] = {
	DEFINE_FREQ_RANGE(1950, 2181, 0, 0),
	DEFINE_FREQ_RANGE(2182, 2399, 2, 0),
};


struct dynamic_freq_range z3_freq_range_lb05[] = {
	DEFINE_FREQ_RANGE(2400, 2649, 0, 0),
};

struct dynamic_freq_range z3_freq_range_lb07[] = {
	DEFINE_FREQ_RANGE(2750, 2964, 2, 0),
	DEFINE_FREQ_RANGE(2965, 3119, 0, 0),
	DEFINE_FREQ_RANGE(3120, 3294, 1, 0),
	DEFINE_FREQ_RANGE(3295, 3449, 2, 0),
};

struct dynamic_freq_range z3_freq_range_lb08[] = {
	DEFINE_FREQ_RANGE(3450, 3624, 0, 0),
	DEFINE_FREQ_RANGE(3625, 3799, 3, 0),
};

struct dynamic_freq_range z3_freq_range_lb12[] = {
	DEFINE_FREQ_RANGE(5010, 5179, 0, 0),
};

struct dynamic_freq_range z3_freq_range_lb13[] = {
	DEFINE_FREQ_RANGE(5180, 5279, 3, 0),	
};

struct dynamic_freq_range z3_freq_range_lb14[] = {
	DEFINE_FREQ_RANGE(5280, 5379, 3, 0),
};

struct dynamic_freq_range z3_freq_range_lb17[] = {
	DEFINE_FREQ_RANGE(5730, 5849, 0, 0),
};

struct dynamic_freq_range z3_freq_range_lb18[] = {
	DEFINE_FREQ_RANGE(5850, 5947, 3, 0),
	DEFINE_FREQ_RANGE(5948, 5999, 0, 0),
};

struct dynamic_freq_range z3_freq_range_lb19[] = {
	DEFINE_FREQ_RANGE(6000, 6149, 0, 0),	
};

struct dynamic_freq_range z3_freq_range_lb20[] = {
	DEFINE_FREQ_RANGE(6150, 6236, 0, 0),
	DEFINE_FREQ_RANGE(6237, 6449, 3, 0),
};

struct dynamic_freq_range z3_freq_range_lb21[] = {
	DEFINE_FREQ_RANGE(6450, 6599, 0, 0),
};

struct dynamic_freq_range z3_freq_range_lb25[] = {
	DEFINE_FREQ_RANGE(8040, 8294, 1, 0),
	DEFINE_FREQ_RANGE(8295, 8405, 2, 0),
	DEFINE_FREQ_RANGE(8406, 8642, 0, 0),
	DEFINE_FREQ_RANGE(8643, 8689, 1, 0),
};

struct dynamic_freq_range z3_freq_range_lb26[] = {
	DEFINE_FREQ_RANGE(8690, 8798, 3, 0),
	DEFINE_FREQ_RANGE(8799, 9039, 0, 0),
};

struct dynamic_freq_range z3_freq_range_lb28[] = {
	DEFINE_FREQ_RANGE(9210,	9223, 2, 0),
	DEFINE_FREQ_RANGE(9224,	9361, 3, 0),
	DEFINE_FREQ_RANGE(9362,	9499, 0, 0),
	DEFINE_FREQ_RANGE(9500,	9606, 0, 0),
	DEFINE_FREQ_RANGE(9607,	9659, 1, 0),
};

struct dynamic_freq_range z3_freq_range_lb29[] = {
	DEFINE_FREQ_RANGE(9660, 9738, 3, 0),
	DEFINE_FREQ_RANGE(9739, 9769, 0, 0),
};

struct dynamic_freq_range z3_freq_range_lb30[] = {
	DEFINE_FREQ_RANGE(9770, 9869, 0, 0),
};

struct dynamic_freq_range z3_freq_range_lb32[] = {
	DEFINE_FREQ_RANGE(9920, 10160, 1, 0),
	DEFINE_FREQ_RANGE(10161, 10244, 2, 0),
	DEFINE_FREQ_RANGE(10245, 10359, 3, 0),
};

struct dynamic_freq_range z3_freq_range_lb34[] = {
	DEFINE_FREQ_RANGE(36200, 36349, 0, 0),
};

struct dynamic_freq_range z3_freq_range_lb38[] = {
	DEFINE_FREQ_RANGE(37750, 37982, 2, 0),
	DEFINE_FREQ_RANGE(37983, 38143, 0, 0),
	DEFINE_FREQ_RANGE(38144, 38249, 1, 0),
};

struct dynamic_freq_range z3_freq_range_lb39[] = {
	DEFINE_FREQ_RANGE(38250, 38524, 1, 0),
	DEFINE_FREQ_RANGE(38525, 38649, 2, 0),
};

struct dynamic_freq_range z3_freq_range_lb40[] = {
	DEFINE_FREQ_RANGE(38650, 38889, 0, 0),
	DEFINE_FREQ_RANGE(38890, 39172, 2, 0),
	DEFINE_FREQ_RANGE(39173, 39367, 0, 0),
	DEFINE_FREQ_RANGE(39368, 39649, 2, 0),
};

struct dynamic_freq_range z3_freq_range_lb41[] = {
	DEFINE_FREQ_RANGE(39650, 39831, 0, 0),
	DEFINE_FREQ_RANGE(39832, 40080, 3, 0),
	DEFINE_FREQ_RANGE(40081, 40307, 0, 0),
	DEFINE_FREQ_RANGE(40308, 40571, 3, 0),
	DEFINE_FREQ_RANGE(40572, 40783, 0, 0),
	DEFINE_FREQ_RANGE(40784, 41061, 3, 0),
	DEFINE_FREQ_RANGE(41062, 41259, 0, 0),
	DEFINE_FREQ_RANGE(41260, 41434, 1, 0),
	DEFINE_FREQ_RANGE(41435, 41589, 2, 0),
};

struct dynamic_freq_range z3_freq_range_lb42[] = {
	DEFINE_FREQ_RANGE(41590, 41804, 3, 0),
	DEFINE_FREQ_RANGE(41805, 42005, 1, 0),
	DEFINE_FREQ_RANGE(42006, 42294, 3, 0),
	DEFINE_FREQ_RANGE(42295, 42484, 1, 0),
	DEFINE_FREQ_RANGE(42485, 42732, 0, 0),
	DEFINE_FREQ_RANGE(42733, 42963, 1, 0),
	DEFINE_FREQ_RANGE(42964, 43208, 0, 0),
	DEFINE_FREQ_RANGE(43209, 43443, 1, 0),
	DEFINE_FREQ_RANGE(43444, 43589, 0, 0),
};

struct dynamic_freq_range z3_freq_range_lb48[] = {
	DEFINE_FREQ_RANGE(55240, 55425, 3, 0),
	DEFINE_FREQ_RANGE(55426, 55593, 1, 0),
	DEFINE_FREQ_RANGE(55594, 55835, 0, 0),
	DEFINE_FREQ_RANGE(55836, 56072, 1, 0),
	DEFINE_FREQ_RANGE(56073, 56311, 0, 0),
	DEFINE_FREQ_RANGE(56312, 56551, 1, 0),
	DEFINE_FREQ_RANGE(56552, 56739, 0, 0),
};

struct dynamic_freq_range z3_freq_range_lb66[] = {
	DEFINE_FREQ_RANGE(66436, 66667, 0, 0),
   	DEFINE_FREQ_RANGE(66668, 66929, 2, 0),
   	DEFINE_FREQ_RANGE(66930, 67143, 0, 0),
   	DEFINE_FREQ_RANGE(67144, 67335, 2, 0),
};

struct dynamic_freq_range z3_freq_range_lb71[] = {
	DEFINE_FREQ_RANGE(68586, 68698, 3, 0),
	DEFINE_FREQ_RANGE(68699, 68935, 0, 0),
};

struct dynamic_freq_range z3_freq_range_n005[] = {
	DEFINE_FREQ_RANGE(173800, 173840, 3, 0),			
	DEFINE_FREQ_RANGE(173860, 178560, 0, 0),
	DEFINE_FREQ_RANGE(178580, 178780, 1, 0),
};


struct dynamic_freq_range z3_freq_range_n008[] = {
	DEFINE_FREQ_RANGE(185000, 188080, 0, 0),
	DEFINE_FREQ_RANGE(188100, 189340, 1, 0),
	DEFINE_FREQ_RANGE(189360, 190420, 2, 0),
	DEFINE_FREQ_RANGE(190440, 191980, 3, 0),
};

struct dynamic_freq_range z3_freq_range_n028[] = {	
	DEFINE_FREQ_RANGE(151600, 151860, 2, 0),
	DEFINE_FREQ_RANGE(151880, 154620, 3, 0),
	DEFINE_FREQ_RANGE(154640, 157380, 0, 0),
	DEFINE_FREQ_RANGE(157400, 159520, 0, 0),
	DEFINE_FREQ_RANGE(159540, 160580, 1, 0),
};

struct dynamic_freq_range z3_freq_range_n071[] = {
	DEFINE_FREQ_RANGE(123400, 125640, 3, 0),
	DEFINE_FREQ_RANGE(125660, 130380, 0, 0),
};
struct df_freq_tbl_info z3_dynamic_freq_set[FREQ_RANGE_MAX] = {
	[FREQ_RANGE_850] = DEFINE_FREQ_SET(z3_freq_range_850),
	[FREQ_RANGE_900] = DEFINE_FREQ_SET(z3_freq_range_900),
	[FREQ_RANGE_1800] = DEFINE_FREQ_SET(z3_freq_range_1800),
	[FREQ_RANGE_1900] = DEFINE_FREQ_SET(z3_freq_range_1900),
	[FREQ_RANGE_WB01] = DEFINE_FREQ_SET(z3_freq_range_wb01),
	[FREQ_RANGE_WB02] = DEFINE_FREQ_SET(z3_freq_range_wb02),
	[FREQ_RANGE_WB03] = DEFINE_FREQ_SET(z3_freq_range_wb03),
	[FREQ_RANGE_WB04] = DEFINE_FREQ_SET(z3_freq_range_wb04),
	[FREQ_RANGE_WB05] = DEFINE_FREQ_SET(z3_freq_range_wb05),
	[FREQ_RANGE_WB07] = DEFINE_FREQ_SET(z3_freq_range_wb07),
	[FREQ_RANGE_WB08] = DEFINE_FREQ_SET(z3_freq_range_wb08),
	[FREQ_RANGE_TD1] = DEFINE_FREQ_SET(z3_freq_range_td1),
	[FREQ_RANGE_TD2] = DEFINE_FREQ_SET(z3_freq_range_td2),
	[FREQ_RANGE_TD3] = DEFINE_FREQ_SET(z3_freq_range_td3),
	[FREQ_RANGE_TD4] = DEFINE_FREQ_SET(z3_freq_range_td4),
	[FREQ_RANGE_TD5] = DEFINE_FREQ_SET(z3_freq_range_td5),
	[FREQ_RANGE_TD6] = DEFINE_FREQ_SET(z3_freq_range_td6),
	[FREQ_RANGE_BC0] = DEFINE_FREQ_SET(z3_freq_range_bc0),
	[FREQ_RANGE_BC1] = DEFINE_FREQ_SET(z3_freq_range_bc1),
	[FREQ_RANGE_BC10] = DEFINE_FREQ_SET(z3_freq_range_bc10),
	[FREQ_RANGE_LB01] = DEFINE_FREQ_SET(z3_freq_range_lb01),
	[FREQ_RANGE_LB02] = DEFINE_FREQ_SET(z3_freq_range_lb02),
	[FREQ_RANGE_LB03] = DEFINE_FREQ_SET(z3_freq_range_lb03),
	[FREQ_RANGE_LB04] = DEFINE_FREQ_SET(z3_freq_range_lb04),
	[FREQ_RANGE_LB05] = DEFINE_FREQ_SET(z3_freq_range_lb05),
	[FREQ_RANGE_LB07] = DEFINE_FREQ_SET(z3_freq_range_lb07),
	[FREQ_RANGE_LB08] = DEFINE_FREQ_SET(z3_freq_range_lb08),
	[FREQ_RANGE_LB12] = DEFINE_FREQ_SET(z3_freq_range_lb12),
	[FREQ_RANGE_LB13] = DEFINE_FREQ_SET(z3_freq_range_lb13),
	[FREQ_RANGE_LB14] = DEFINE_FREQ_SET(z3_freq_range_lb14),
	[FREQ_RANGE_LB17] = DEFINE_FREQ_SET(z3_freq_range_lb17),
	[FREQ_RANGE_LB18] = DEFINE_FREQ_SET(z3_freq_range_lb18),
	[FREQ_RANGE_LB19] = DEFINE_FREQ_SET(z3_freq_range_lb19),
	[FREQ_RANGE_LB20] = DEFINE_FREQ_SET(z3_freq_range_lb20),
	[FREQ_RANGE_LB21] = DEFINE_FREQ_SET(z3_freq_range_lb21),
	[FREQ_RANGE_LB25] = DEFINE_FREQ_SET(z3_freq_range_lb25),
	[FREQ_RANGE_LB26] = DEFINE_FREQ_SET(z3_freq_range_lb26),
	[FREQ_RANGE_LB28] = DEFINE_FREQ_SET(z3_freq_range_lb28),
	[FREQ_RANGE_LB29] = DEFINE_FREQ_SET(z3_freq_range_lb29),
	[FREQ_RANGE_LB30] = DEFINE_FREQ_SET(z3_freq_range_lb30),
	[FREQ_RANGE_LB32] = DEFINE_FREQ_SET(z3_freq_range_lb32),
	[FREQ_RANGE_LB34] = DEFINE_FREQ_SET(z3_freq_range_lb34),
	[FREQ_RANGE_LB38] = DEFINE_FREQ_SET(z3_freq_range_lb38),
	[FREQ_RANGE_LB39] = DEFINE_FREQ_SET(z3_freq_range_lb39),
	[FREQ_RANGE_LB40] = DEFINE_FREQ_SET(z3_freq_range_lb40),
	[FREQ_RANGE_LB41] = DEFINE_FREQ_SET(z3_freq_range_lb41),
	[FREQ_RANGE_LB42] = DEFINE_FREQ_SET(z3_freq_range_lb42),
	[FREQ_RANGE_LB48] = DEFINE_FREQ_SET(z3_freq_range_lb48),
	[FREQ_RANGE_LB66] = DEFINE_FREQ_SET(z3_freq_range_lb66),
	[FREQ_RANGE_LB71] = DEFINE_FREQ_SET(z3_freq_range_lb71),
	[FREQ_RANGE_N005] = DEFINE_FREQ_SET(z3_freq_range_n005),
	[FREQ_RANGE_N008] = DEFINE_FREQ_SET(z3_freq_range_n008),
	[FREQ_RANGE_N028] = DEFINE_FREQ_SET(z3_freq_range_n028),
	[FREQ_RANGE_N071] = DEFINE_FREQ_SET(z3_freq_range_n071),
};

#endif //__Z3_DYNAMIC_FREQ__
