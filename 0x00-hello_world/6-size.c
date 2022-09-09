#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("          int is %2d byte(s) \n", sizeof(int));
	printf("     long int is %2d byte(s) \n", sizeof(long int));
	printf("  long long int is %2d byte(s) \n", sizeof(long long int));
	printf("        float is %2d byte(s) \n", sizeof(float));
	printf("         char is %2d byte(s) \n", sizeof(char));
	return (0);
}
