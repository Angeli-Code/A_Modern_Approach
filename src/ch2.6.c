#include <stdio.h>

#define FORMULA ((((3 * x + 2) * x - 5) * x -1) * x + 7) * x - 6

/* Chapter 2 Exercise 6
 * --------------------
 * Modify the program of Programming Project 5 so that the polynomial is evaluated using the
 * following formula:
 * ((((3x + 2)x - 5)x - 1)x + 7)x - 6
 * Note that the modified program performs fewer multiplications. This technique for
 * evaluating polynomials is known as Horner's Rule.
 */

int main(void)
{
	double x;
	
	printf("Enter the value of 'x': ");
	scanf("%lf", &x);
	
	printf("Answer: %.2lf\n", FORMULA);

	return 0;
}
