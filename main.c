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
