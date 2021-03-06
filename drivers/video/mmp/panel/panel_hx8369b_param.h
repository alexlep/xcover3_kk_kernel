#ifndef __PANEL_HX8369B_PARAM_H__
#define __PANEL_HX8369B_PARAM_H__

#include <video/mipi_display.h>

#define HS_MODE 0
#define LP_MODE 1

static u8 hx8369b_exit_sleep[] = {0x11};
static u8 hx8369b_display_on[] = {0x29};
static u8 hx8369b_sleep_in[] = {0x10};
static u8 hx8369b_display_off[] = {0x28};
#if 0

#define HX8369B_SLEEP_OUT_DELAY 120
#define HX8369B_SLEEP_IN_DELAY 120
#define HX8369B_DISP_ON_DELAY	50
#define HX8369B_DISP_OFF_DELAY	10

static u8 set_extc[] = {0xb9, 0xff, 0x83, 0x69};
static u8 set_power[] = {0xb1, 0x0b, 0x83, 0x77,0x00,0x0f,0x0f,0x0b,0x0b,0x0c,0x0a};
static u8 set_crc_eq[] = {0xc6, 0x41, 0xff, 0x7d};
static u8 set_crc_eq1[] = {0xe3, 0x00, 0x00, 0x00,0x00};
static u8 set_crc_option[] = {0xc0, 0x73, 0x50, 0x00,0x34,0xc4,0x00};
static u8 set_mipi_characteristic[] = {0xba, 0x31, 0x00, 0x16,0xca,0xc1,0x0a,0x00,0x10,0x28,0x02,0x21,0x21,0x9a,0x1a,0x8f};
static u8 set_pixel_fmt[] = {0x3a, 0x70};
static u8 set_rgb_if[] = {0xb3, 0x83,0x00,0x31,0x03};
static u8 set_col_invert[] = {0xb4, 0x00};
static u8 set_dgc[] = {0xcc, 0x0e};
static u8 set_color[] = {0xea, 0x72};
static u8 set_disp[] = {0xb2, 0x03};
static u8 set_gip_timing[] = {0xd5,0x00,0x07,0x00,0x09,0x00,0x00,0x10,0x01,0x00,
								0x00,0x00,0x01,0x42,0x37,0x00,0x00,0x08,0x2a,0x08,
								0x47,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
								0x00,0x00,0x00,0x00,0x00,0x15,0x00,0x00,0x98,0x98,
								0x44,0x66,0x00,0x22,0x51,0x00,0x00,0x89,0x98,0x33,
								0x11,0x77,0x55,0x04,0x00,0x00,0x98,0x98,0x55,0x77,
								0x11,0x33,0x40,0x00,0x00,0x89,0x98,0x22,0x00,0x66,
								0x44,0x15,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x03,
								0x00,0x0f,0xff,0xff,0x03,0x00,0x0f,0xff,0xff,0x00,
								0x8c,0x5a};
static u8 set_gamma[] = {0xe0,0x01,0x02,0x05,0x2c,0x33,0x3f,0x10,0x33,0x06,
							0x0d,0x0e,0x10,0x16,0x10,0x14,0x13,0x19,0x01,0x02,
							0x05,0x2c,0x32,0x3f,0x0e,0x30,0x08,0x0e,0x0f,0x12,
							0x11,0x14,0x12,0x13,0x19,0x01};




static struct mmp_dsi_cmd_desc hx8369b_display_on_cmds[] = {
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_extc), set_extc},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_power), set_power},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_crc_eq), set_crc_eq},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_crc_eq1), set_crc_eq1},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_crc_option), set_crc_option},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_mipi_characteristic), set_mipi_characteristic},
	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(set_pixel_fmt), set_pixel_fmt},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_rgb_if), set_rgb_if},
	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(set_col_invert), set_col_invert},
	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(set_dgc), set_dgc},
	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(set_color), set_color},
	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(set_disp), set_disp},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_gip_timing), set_gip_timing},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_gamma), set_gamma},
	{MIPI_DSI_DCS_SHORT_WRITE, HS_MODE, HX8369B_SLEEP_OUT_DELAY, sizeof(hx8369b_exit_sleep), hx8369b_exit_sleep},
	{MIPI_DSI_DCS_SHORT_WRITE, HS_MODE, HX8369B_DISP_ON_DELAY, sizeof(hx8369b_display_on), hx8369b_display_on},
};
#endif

#define HX8369B_SLEEP_OUT_DELAY 180
#define HX8369B_SLEEP_IN_DELAY 120
#define HX8369B_DISP_ON_DELAY	100
#define HX8369B_DISP_OFF_DELAY	10

static u8 set_extc[] = {0xb9, 0xff, 0x83, 0x69};
static u8 set_mipi_ctrl[] = {0xba,0x31,0x00,0x16,0xca,0xb1,0x0a,0x00,0x10,0x28,0x02,0x21,0x21,0x9a,0x1a,0x8f};
static u8 set_disP_direct[] = {0x36, 0x00};

static u8 set_power1[] = {0xb1, 0x0b, 0x83, 0x77,0x00,0x0f,0x0f,0x16,0x16,0x0c,0x0a};

#if 0 /* FIX ME (unused) */
static u8 set_power[] = {0xb1, 0x0b, 0x83, 0x77,0x00,0x0f,0x0f,0x0b,0x0b,0x0c,0x0a};
static u8 set_crc_eq[] = {0xc6, 0x41, 0xff, 0x7d};
static u8 set_crc_eq1[] = {0xe3, 0x00, 0x00, 0x00,0x00};
static u8 set_crc_option[] = {0xc0, 0x73, 0x50, 0x00,0x34,0xc4,0x00};
static u8 set_mipi_characteristic[] = {0xba, 0x31, 0x00, 0x16,0xca,0xc1,0x0a,0x00,0x10,0x28,0x02,0x21,0x21,0x9a,0x1a,0x8f};
static u8 set_col_invert[] = {0xb4, 0x00};
#endif

static u8 set_pixel_fmt[] = {0x3a, 0x70};
static u8 set_rgb_if[] = {0xb3, 0x83,0x00,0x31,0x03};
static u8 set_CYC[] = {0xb4, 0x00};
static u8 set_VCOM[] = {0xb6, 0xa3,0xa3};
static u8 set_panel[] = {0xcc, 0x0c};
static u8 set_STBA[] = {0xc0, 0x73,0X50,0X00,0x34,0xc4,0x00};
static u8 set_EQ[] = {0xE3, 0x00,0x00,0x00,0x00};
static u8 set_panel1[] = {0xEA, 0x72};
static u8 set_ECO[] = {0xC6, 0x41,0XFF,0X7D};



#if 0 /* FIX ME (unused) */
static u8 set_dgc[] = {0xcc, 0x0e};
static u8 set_color[] = {0xea, 0x72};
static u8 set_gamma[] = {0xe0,0x01,0x02,0x05,0x2c,0x33,0x3f,0x10,0x33,0x06,
							0x0d,0x0e,0x10,0x16,0x10,0x14,0x13,0x19,0x01,0x02,
							0x05,0x2c,0x32,0x3f,0x0e,0x30,0x08,0x0e,0x0f,0x12,
							0x11,0x14,0x12,0x13,0x19,0x01};
#endif

static u8 set_disp[] = {0xb2, 0x03};
static u8 set_gip_timing[] = {0xd5,0x00,0x00,0x07,0x00,0x09,0x00,0x00,0x10,0x01,0x00,
								0x00,0x00,0x01,0x42,0x37,0x00,0x00,0x08,0x2a,0x08,
								0x47,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
								0x00,0x00,0x00,0x00,0x00,0x15,0x00,0x00,0x98,0x98,
								0x44,0x66,0x00,0x22,0x51,0x00,0x00,0x89,0x98,0x33,
								0x11,0x77,0x55,0x04,0x00,0x00,0x98,0x98,0x55,0x77,
								0x11,0x33,0x40,0x00,0x00,0x89,0x98,0x22,0x00,0x66,
								0x44,0x15,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x03,
								0x00,0x0f,0xff,0xff,0x03,0x00,0x0f,0xff,0xff,0x00,
								0x8c,0x5a};
static u8 set_gamma1[] = {0xe0,0x01,0x0d,0x18,0x14,0x13,0x2f,0x31,0x3b,0x09,
							0x10,0x12,0x16,0x17,0x16,0x16,0x11,0x14,0x01,0x0d,
							0x18,0x14,0x13,0x2f,0x30,0x3b,0x09,0x10,0x11,0x16,
							0x17,0x15,0x16,0x11,0x14,0x01};

static u8 set_CDGC[] = {0xC1, 0x01,0X00,0x06,0X0D,0x15,0x1d,0x25,0x2d,
								0x35,0x3d,0x45,0x4d,0x55,0x5d,0x65,0x6d,
								0x75,0x7c,0x84,0x8c,0x94,0x9c,0xa4,0xac,
								0xb4,0xbc,0xc4,0xcc,0xd4,0xdc,0xe4,0xec,
								0xf3,0xfd,0x0f,0xfa,0x95,0x40,0xff,0xaa,
								0x54,0x03,0xc0,0x00,0x07,0x0f,0x17,0x1f,
								0x27,0x2f,0x37,0x3f,0x47,0x4f,0x57,0x5f,
								0x67,0x6f,0x77,0x7f,0x87,0x8f,0x97,0x9f,
								0xa7,0xaf,0xb7,0xbf,0xc7,0xcf,0xd7,0xdf,
								0xe7,0xef,0xf7,0xff,0x00,0x00,0x00,0x00,
								0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x0f,
								0x17,0x1f,0x27,0x2f,0x37,0x3f,0x47,0x4f,
								0x57,0x5f,0x67,0x6f,0x77,0x7f,0x87,0x8f,
								0x97,0x9f,0xa7,0xaf,0xb7,0xbf,0xc7,0xcf,
								0xd7,0xdf,0xe7,0xef,0xf7,0xff,0x00,0x00,
								0x00,0x00,0x00,0x00,0x00,0x00,0x00
								};


static struct mmp_dsi_cmd_desc hx8369b_display_on_cmds[] = {
#if 0
#if 0
	{DSI_DI_DCS_LWRITE, HS_MODE, 10, sizeof(set_extc), set_extc},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(set_power), set_power},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(set_crc_eq), set_crc_eq},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(set_crc_eq1), set_crc_eq1},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(set_crc_option), set_crc_option},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(set_mipi_characteristic), set_mipi_characteristic},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(set_pixel_fmt), set_pixel_fmt},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(set_rgb_if), set_rgb_if},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(set_col_invert), set_col_invert},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(set_dgc), set_dgc},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(set_color), set_color},
	{DSI_DI_DCS_SWRITE1, HS_MODE, 0, sizeof(set_disp), set_disp},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(set_gip_timing), set_gip_timing},
	{DSI_DI_DCS_LWRITE, HS_MODE, 0, sizeof(set_gamma), set_gamma},
#endif
	{DSI_DI_DCS_SWRITE, HS_MODE, HX8369B_SLEEP_OUT_DELAY, sizeof(hx8369b_exit_sleep), hx8369b_exit_sleep},
	{DSI_DI_DCS_SWRITE, HS_MODE, HX8369B_DISP_ON_DELAY, sizeof(hx8369b_display_on), hx8369b_display_on},
#else
#if 1
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 10, sizeof(set_extc), set_extc},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_mipi_ctrl), set_mipi_ctrl},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_gip_timing), set_gip_timing},
	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(set_pixel_fmt), set_pixel_fmt},
	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(set_disP_direct), set_disP_direct},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_power1), set_power1},
	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(set_disp), set_disp},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_rgb_if), set_rgb_if},
	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(set_CYC), set_CYC},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_VCOM), set_VCOM},
	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(set_panel), set_panel},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_STBA), set_STBA},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_EQ), set_EQ},
	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(set_panel1), set_panel1},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_ECO), set_ECO},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_gamma1), set_gamma1},
	{MIPI_DSI_DCS_LONG_WRITE, HS_MODE, 0, sizeof(set_CDGC), set_CDGC},
	#endif
	{MIPI_DSI_DCS_SHORT_WRITE, HS_MODE, HX8369B_SLEEP_OUT_DELAY, sizeof(hx8369b_exit_sleep), hx8369b_exit_sleep},
	{MIPI_DSI_DCS_SHORT_WRITE, HS_MODE, HX8369B_DISP_ON_DELAY, sizeof(hx8369b_display_on), hx8369b_display_on},
#endif
};

static struct mmp_dsi_cmd_desc hx8369b_display_off_cmds[] = {

	{MIPI_DSI_DCS_SHORT_WRITE, HS_MODE, HX8369B_DISP_OFF_DELAY, sizeof(hx8369b_display_off), hx8369b_display_off},
	{MIPI_DSI_DCS_SHORT_WRITE, HS_MODE, HX8369B_SLEEP_IN_DELAY, sizeof(hx8369b_sleep_in), hx8369b_sleep_in},
};




#endif //__PANEL_HX8369B_PARAM_H__

