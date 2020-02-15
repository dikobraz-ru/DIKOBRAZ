#include <stdio.h>
#include "input.h"

int input(int *a1, int *a2, int *a3, int *a4,
	int *m1, int *m2, int *m3, int *m4)
{
	printf("Input IP; netmask: ");
	if (scanf("%d.%d.%d.%d; %d.%d.%d.%d", a1, a2, a3, a4,
		m1, m2, m3, m4) < 8) {
		printf("Invalid IP addr/netmask!\n");
		return -1;
	}
	/*Adding test line with LF */
	return 0;
}

int check_data(int a1, int a2, int a3, int a4,
	int m1, int m2, int m3, int m4)
{
	if (a1 > 255 || a2 > 255 || a3 > 255 || a4 > 255 ||
		m1 > 255 || m2 > 255 || m3 > 255 || m4 > 255 ||
		a1 < 0 || a2 < 0 || a3 < 0 || a4 <= 0 ||
		m1 < 0 || m2 < 0 || m3 < 0 || m4 < 0) {
		printf("Invalid IP addr!\n");
		return -1;
	}

	return 0;
}
