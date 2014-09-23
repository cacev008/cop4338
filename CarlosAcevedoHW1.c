#include <stdio.h>
int main()
{
	/* print celsius-Fahrenheit table
	for celsius = 0, 1, 2, ..., 100*/
	int fahr, celsius;
	int lower, upper, step;
	lower = 0; /*lower limit of temperature scale*/
	upper = 100; /*upper limit*/
	step = 1; /*step size*/
	celsius = lower;
	while (celsius <= upper)
	{
		fahr = (1.8 * celsius) + 32;
		printf("%d\t%d\n", celsius, fahr);
		celsius = celsius + step;
	}
}
