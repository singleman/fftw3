/*
 * Copyright (c) 2002 Matteo Frigo
 * Copyright (c) 2002 Steven G. Johnson
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* $Id: reodft.h,v 1.2 2002-08-20 19:31:54 stevenj Exp $ */

#ifndef __REODFT_H__
#define __REODFT_H__

#include "ifftw.h"
#include "rdft.h"

#define REODFT_KINDP(k) ((k) >= REDFT00 && (k) <= RODFT11)

/* verify.c: */
void X(reodft_verify)(plan *pln, const problem_rdft *p, uint rounds);

void X(redft00e_r2hc_register)(planner *p);
void X(rodft00e_r2hc_register)(planner *p);
void X(reodft010e_r2hc_register)(planner *p);
void X(reodft11e_r2hc_register)(planner *p);

/* configurations */
void X(reodft_conf_standard)(planner *p);

#endif /* __REODFT_H__ */
