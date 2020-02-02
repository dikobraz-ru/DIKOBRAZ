#include <stdio.h>
#include "calc.h"

void calc_net_addr(int a1, int a2, int a3, int a4,
	int m1, int m2, int m3, int m4)
{
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;

	n1 = a1 & m1;
	n2 = a2 & m2;
	n3 = a3 & m3;
	n4 = a4 & m4;

	printf("Network address: %d.%d.%d.%d\n", n1, n2, n3, n4);
}

void calc_net_class(int a1)
{
	if ((a1 & 0x80) == 0)
		printf("Network class A\n");
	else if ((a1 & 0xC0) == 0x80)
		printf("Network class B\n");
	else if ((a1 & 0xE0) == 0xC0)
		printf("Network class C\n");
	else if ((a1 & 0xF0) == 0xE0)
		printf("Network class D\n");
	else
		printf("Network class E\n");
}
