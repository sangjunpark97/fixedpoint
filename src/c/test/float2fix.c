#include <iostream>
#include "../fixedpoint.h"

int main() {
	ieee754_float a;
	int wl, iwl;

	printf("float: ");
	scanf("%f", &a.f);
	
	printf("WL: ");
	scanf("%d", &wl);

	printf("IWL: ");
	scanf("%d", &iwl);

	printf("\n<float info>\n");
	printf("sign: ");
	print_binary(a.ieee.negative, SIGN);
	printf("\n");

	printf("exponent: ");
	print_binary(a.ieee.exponent, EXPONENT);
	printf("\n");

	printf("mantissa: ");
	print_binary(a.ieee.mantissa, MANTISSA);
	printf("\n");
	
	printf("\n<result>\n");
	int ret = float2fix(a.f, wl, iwl);
	printf("binary: ");
	printb_fix(ret, wl, iwl);
	printf(" (");
	print_binary(ret, wl);
	printf(")\n");
	printf("decimal: ");
	printd_fix(ret, wl, iwl);
	printf(" (%d)\n", ret);

	return 0;
}

