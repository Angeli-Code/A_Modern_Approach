#include <stdio.h>

#define FORMULA (3 * (x * x * x * x * x) - 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + (7 * x) - 6) 

/* Chapter 2 Exercise 5
 * --------------------
 * Write a program that asks the user to enter a value for x and then displays the value of the
 * following polynomial:
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 * Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply x by itself
 * repeatedly in order to compute the powers of x. (For example, x * x * x is x cubed.)
 */

int main(void)
{
	double x;

	printf("Enter Value of 'x': ");	
	scanf("%lf", &x);
	
	printf("Answer: %.2lf\n", FORMULA); 
	

	return 0;
}
