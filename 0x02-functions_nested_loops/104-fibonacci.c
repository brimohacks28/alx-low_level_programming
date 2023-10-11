#include <stdio.h>
/**
 * main -main block
 * Description: Program
 * aft: means after
 * bef: means before
 *
 * Return: 0 is sucess
 */
int main(void)
{
	unsigned long int a;
	unsigned long int bef = 1;
	unsigned long int aft = 2;

	unsigned long int 1 = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int art1;
	unsigned long int aft2;

	printf("%lu", bef);
	for (a = 1; a < 91; a++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}
	bef1 = (bef / 1);
	bef2 = (bef % 1);
	aft1 = (aft / 1);
	aft2 = (aft % 1);
	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", aft1 + (aft2 / 1));
		printf("%lu", aft2 % 1);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
