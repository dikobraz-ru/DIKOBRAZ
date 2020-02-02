/*
 * main.c
 *
 * Copyright 2020 Ilya Palachev <dikobraz@ubuntu>
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include <stdio.h>
#include "input.h"
#include "calc.h"

int main(int argc, char **argv)
{
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
	int m1 = 0, m2 = 0, m3 = 0, m4 = 0;

	if (input(&a1, &a2, &a3, &a4, &m1, &m2, &m3, &m4) < 0)
		return -1;

	if (check_data(a1, a2, a3, a4, m1, m2, m3, m4) < 0)
		return -1;

	calc_net_addr(a1, a2, a3, a4, m1, m2, m3, m4);
	calc_net_class(a1);

	return 0;
}
