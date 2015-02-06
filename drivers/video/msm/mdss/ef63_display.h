/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef __EF63_DISPLAY_H_
#define __EF63_DISPLAY_H_

char aor_dim[32][5] = 
{
	{0xB2,0x00,0x06,0x07,0x3d},
	{0xB2,0x00,0x06,0x06,0xE8},
	{0xB2,0x00,0x06,0x06,0x48},
	{0xB2,0x00,0x06,0x05,0xAB},
	{0xB2,0x00,0x06,0x04,0xFF},
	{0xB2,0x00,0x06,0x04,0x4D},
	{0xB2,0x00,0x06,0x03,0x98},
	{0xB2,0x00,0x06,0x02,0xD2},
	{0xB2,0x00,0x06,0x02,0x1D},
	{0xB2,0x00,0x06,0x01,0x52},
	{0xB2,0x00,0x06,0x00,0xB7},
	{0xB2,0x00,0x06,0x00,0x0A},
	
	{0xB2,0x00,0x06,0x03,0x07},
	{0xB2,0x00,0x06,0x03,0x07},
	{0xB2,0x00,0x06,0x03,0x07},
	{0xB2,0x00,0x06,0x03,0x07},
	{0xB2,0x00,0x06,0x03,0x07},
	{0xB2,0x00,0x06,0x03,0x07},
	{0xB2,0x00,0x06,0x03,0x07},
	{0xB2,0x00,0x06,0x03,0x07},

	{0xB2,0x00,0x06,0x00,0x0A},
	{0xB2,0x00,0x06,0x00,0x0A},
	{0xB2,0x00,0x06,0x00,0x0A},
	{0xB2,0x00,0x06,0x00,0x0A},
	{0xB2,0x00,0x06,0x00,0x0A},
	{0xB2,0x00,0x06,0x00,0x0A},
	{0xB2,0x00,0x06,0x00,0x0A},
	{0xB2,0x00,0x06,0x00,0x0A},
	{0xB2,0x00,0x06,0x00,0x0A},
	{0xB2,0x00,0x06,0x00,0x0A},
	{0xB2,0x00,0x06,0x00,0x0A},
	{0xB2,0x00,0x06,0x00,0x0A},

};

char aor_dim_lsi[32][5] = 
{
	{0xB2,0x00,0x08,0x07,0x3A},//5
	{0xB2,0x00,0x08,0x06,0xE9},//10
	{0xB2,0x00,0x08,0x06,0x40},//20
	{0xB2,0x00,0x08,0x05,0x95},//30
	{0xB2,0x00,0x08,0x04,0xCC},//41
	{0xB2,0x00,0x08,0x04,0x25},//50
	{0xB2,0x00,0x08,0x03,0x65},//60
	{0xB2,0x00,0x08,0x02,0xC4},//68

	{0xB2,0x00,0x08,0x02,0xC4},//77
	{0xB2,0x00,0x08,0x02,0xC4},//87
	{0xB2,0x00,0x08,0x02,0xC4},//98
	{0xB2,0x00,0x08,0x02,0xC4},//105
	{0xB2,0x00,0x08,0x02,0xC4},//111
	{0xB2,0x00,0x08,0x02,0xC4},//119
	{0xB2,0x00,0x08,0x02,0xC4},//126
	{0xB2,0x00,0x08,0x02,0xC4},//134
	{0xB2,0x00,0x08,0x02,0xC4},//143
	{0xB2,0x00,0x08,0x02,0xC4},//152
	{0xB2,0x00,0x08,0x02,0xC4},//162
	{0xB2,0x00,0x08,0x02,0xC4},//172

	{0xB2,0x00,0x08,0x02,0x64},//183
	{0xB2,0x00,0x08,0x01,0xFC},//195
	{0xB2,0x00,0x08,0x01,0x8C},//207
	{0xB2,0x00,0x08,0x01,0x12},//220
	{0xB2,0x00,0x08,0x00,0x89},//234

	{0xB2,0x00,0x08,0x00,0x08},//249
	{0xB2,0x00,0x08,0x00,0x08},//265
	{0xB2,0x00,0x08,0x00,0x08},//282
	{0xB2,0x00,0x08,0x00,0x08},//300
	{0xB2,0x00,0x08,0x00,0x08},//316
	{0xB2,0x00,0x08,0x00,0x08},//333
	{0xB2,0x00,0x08,0x00,0x08},//350

};

char elvss_set[32][3] = {
	{0xB6,0x4C,0x96},//5
	{0xB6,0x4C,0x96},//10
	{0xB6,0x4C,0x96},//20
	{0xB6,0x4C,0x96},//30
	{0xB6,0x4C,0x96},//40
	{0xB6,0x4C,0x96},//50
	{0xB6,0x4C,0x96},//60
	{0xB6,0x4C,0x96},//70
	{0xB6,0x4C,0x96},//80
	{0xB6,0x4C,0x96},//90
	{0xB6,0x4C,0x96},//98
	{0xB6,0x4C,0x96}, //105

	{0xB6,0x4C,0x95},//111
	{0xB6,0x4C,0x95},
	{0xB6,0x4C,0x94},
	{0xB6,0x4C,0x94},
	{0xB6,0x4C,0x93},
	{0xB6,0x4C,0x92},
	{0xB6,0x4C,0x92},
	{0xB6,0x4C,0x91},
	
	{0xB6,0x4C,0x93}, //183
	{0xB6,0x4C,0x93},
	{0xB6,0x4C,0x92},
	{0xB6,0x4C,0x92},
	{0xB6,0x4C,0x91},
	{0xB6,0x4C,0x90},
	{0xB6,0x4C,0x8F},
	{0xB6,0x4C,0x8E},
	{0xB6,0x4C,0x8E},
	{0xB6,0x4C,0x8D},
	{0xB6,0x4C,0x8C},
	{0xB6,0x4C,0x8B}  
};


char elvss_set_lsi[32][3] = {
	{0xB6,0x8C,0x17},//5
	{0xB6,0x8C,0x17},//10
	{0xB6,0x8C,0x17},//20
	{0xB6,0x8C,0x17},//30
	{0xB6,0x8C,0x17},//41
	{0xB6,0x8C,0x17},//50
	{0xB6,0x8C,0x17},//60
	{0xB6,0x8C,0x17},//68

	{0xB6,0x8C,0x16},//77
	{0xB6,0x8C,0x15},//87
	{0xB6,0x8C,0x14},//98
	{0xB6,0x8C,0x13},//105
	{0xB6,0x8C,0x13},//111
	{0xB6,0x8C,0x12},//119

	{0xB6,0x8C,0x11},//126
	{0xB6,0x8C,0x11},//134
	{0xB6,0x8C,0x10},//143
	{0xB6,0x8C,0x0F},//152
	{0xB6,0x8C,0x0E},//162
	{0xB6,0x8C,0x0D},//172
	{0xB6,0x8C,0x0D},//183 

	{0xB6,0x8C,0x0C},//195
	{0xB6,0x8C,0x0C},//207
	{0xB6,0x8C,0x0C},//220
	{0xB6,0x8C,0x0C},//234

	{0xB6,0x8C,0x0B},//249
	{0xB6,0x8C,0x0A},//265
	{0xB6,0x8C,0x09},//282
	{0xB6,0x8C,0x08},//300
	{0xB6,0x8C,0x07},//316
	{0xB6,0x8C,0x06},//333
	{0xB6,0x8C,0x05} //350
};

int gamma_level[32] = {
	5,10,20,30,40,50,60,70,80,90,
	98,105,111,119,126,134,143,152,162,172,
	183,195,207,220,234,249,265,282,300,316,
	333,350
};

int gamma_level_lsi[32] = {
	5,10,20,30,41,50,60,68,77,87,98,105,111,119,126,134,143,152,162,
	172,183,195,207,220,234,249,265,282,300,316,333,350
};

char oled_gamma[34] = {
	0xca,0x0,0xcc,0x0,0xd6,0x0,0xc7,0x84,
	0x87,0x84,0x8b,0x87,0x8b,0x84,0x85,0x83,
	0x81,0x7e,0x86,0x83,0x88,0x82,0x7f,0x81,
	0x7d,0x8c,0x8c,0x88,0xc4,0x8e,0x90,0x0,
	0x0,0x0
};
char oled_gamma_lsi[34] = {
	0xca,0x0,0xe6,0x0,0xe9,0x0,0xe5,0x83,0x83,0x82,
	0x85,0x85,0x84,0x83,0x85,0x84,0x81,0x81,0x82,0x82,
	0x84,0x82,0x80,0x82,0x7f,0x85,0x87,0x82,0x8e,0x87,
	0x86,0x0,0x0,0x0
};


char locking[2] = {0xf7,0x01};
char locking_disable[2] = {0xf7,0x00};
char locking_lsi[2] = {0xf7,0x03};
char temp_set[5] = {0xb8,0x00,0x04,0x00,0x00};
char mtp_unlock[3] = {0xf0, 0x5a, 0x5a};

#ifdef CONFIG_F_SKYDISP_HBM_FOR_AMOLED
char hbm_gamma[34] = {0xca,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
					     0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
					     0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
					     0x80,0x00,0x00,0x00};
char elvss_hbm_cmd[18] = {0xb6,0x8c,0x05,0x00,0x00,0x00,0x00
						,0x00,0x03,0x55,0x54,0x20
						,0x00,0x06,0x66,0x6c,0x0c
						,0x00};
char elvss_hbm_cmd_backup[18] = {0xb6,0x8c,0x05,0x00,0x00,0x00,0x00
						,0x00,0x03,0x55,0x54,0x20
						,0x00,0x06,0x66,0x6c,0x0c
						,0x00};
#endif

struct dsi_cmd_desc backlight_cmd = {
	{DTYPE_DCS_LWRITE, 1, 0, 0, 0, sizeof(oled_gamma)},
	oled_gamma
};
struct dsi_cmd_desc locking_cmd = {
	{DTYPE_DCS_WRITE1, 1, 0, 0, 0, sizeof(locking)},
	locking
};
struct dsi_cmd_desc locking_disable_cmd = {
	{DTYPE_DCS_WRITE1, 1, 0, 0, 0, sizeof(locking_disable)},
	locking_disable
};
struct dsi_cmd_desc aor_cmd = {
	{DTYPE_DCS_LWRITE, 1, 0, 0, 0, sizeof(aor_dim[0])},
	aor_dim[0]
};
struct dsi_cmd_desc elvss_cmd = {
	{DTYPE_DCS_LWRITE, 1, 0, 0, 0, sizeof(elvss_set[0])},
	elvss_set[0]
};
struct dsi_cmd_desc temp_cmd = {
	{DTYPE_DCS_LWRITE, 1, 0, 0, 0, sizeof(temp_set)},
	temp_set
};
struct dsi_cmd_desc mtp_unlock_cmd = {
	{DTYPE_DCS_LWRITE, 1, 0, 0, 1, sizeof(mtp_unlock)},
	mtp_unlock
};
#endif
