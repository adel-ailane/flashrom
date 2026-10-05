/*
 * SPDX-License-Identifier: GPL-2.0-or-later
 * SPDX-FileCopyrightText: 2015 Paul Kocialkowski <contact@paulk.fr>
 */

#ifndef __ENE_H__
#define __ENE_H__ 1

#define ENE_XBI_EFA0			0xfea8
#define ENE_XBI_EFA1			0xfea9
#define ENE_XBI_EFA2			0xfeaa
#define ENE_XBI_EFDAT			0xfeab
#define ENE_XBI_EFCMD			0xfeac
#define ENE_XBI_EFCFG			0xfead

#define ENE_XBI_EFCFG_CMD_WE		(1 << 3)
#define ENE_XBI_EFCFG_BUSY		(1 << 1)

#define ENE_XBI_EFCMD_HVPL_LATCH	0x02
#define ENE_XBI_EFCMD_READ		0x03
#define ENE_XBI_EFCMD_ERASE		0x20
#define ENE_XBI_EFCMD_PROGRAM		0x70
#define ENE_XBI_EFCMD_HVPL_CLEAR	0x80

#define ENE_EC_PXCFG			0xff14

#define ENE_EC_PXCFG_8051_RESET		0x01

#define ENE_EC_HWVERSION		0xff00
#define ENE_EC_EDIID			0xff24

#define ENE_KB9010_HWVERSION		0xc3
#define ENE_KB9010_EDIID		0x04

#define ENE_KB9012_HWVERSION		0xc3
#define ENE_KB9012_EDIID		0x04

#define ENE_KB9016_HWVERSION		0xc3
#define ENE_KB9016_EDIID		0x04

#define ENE_KB9018_HWVERSION		0xc3
#define ENE_KB9018_EDIID		0x04

#define ENE_KB9022_HWVERSION		0xb1
#define ENE_KB9022_EDIID		0x07

#define ENE_KB9028_HWVERSION		0xc0
#define ENE_KB9028_EDIID		0x07

#define ENE_KB9052B_HWVERSION		0xb0
#define ENE_KB9052B_EDIID		0x0b

#define ENE_KB9052D_HWVERSION		0xd0
#define ENE_KB9052D_EDIID		0x0b

#define ENE_KB9542_HWVERSION            0xa0
#define ENE_KB9542_EDIID                0x07

struct ene_chip {
	unsigned char hwversion;
	unsigned char ediid;
};

#endif
