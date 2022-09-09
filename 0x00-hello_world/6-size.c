#include <stdio.h>

int main(void)
{
	printf("    short int is %2d byte(s) \n", sizeof(short int));
	printf("          int is %2d byte(s) \n", sizeof(int));
	printf("     long int is %2d byte(s) \n", sizeof(long int));
	printf("   signed int is %2d byte(s) \n", sizeof(signed int));
	printf(" unsigned int is %2d byte(s) \n", sizeof(unsigned int));
	printf("\n");
	printf("        float is %2d byte(s) \n", sizeof(float));
	printf("       double is %2d byte(s) \n", sizeof(double));
	printf("  long double is %2d byte(s) \n", sizeof(long double));
	printf("\n");
	printf("  signed char is %2d byte(s) \n", sizeof(signed char));
	printf("         char is %2d byte(s) \n", sizeof(char));
	printf("unsigned char is %2d byte(s) \n", sizeof(unsigned char));
	return (0);
}
