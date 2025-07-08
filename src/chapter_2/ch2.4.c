#include <stdio.h>

#define TAX 6.0

/* 
 * Write a program that asks the user to enter a dollars-and-cents amount, then displays the
 * amount with 5% tax added:
 * Enter an amount: 100.00
 * With tax added: $105.00
 */

int main(void)
{
	double init_amount;

	printf("Enter Dollar Amount: ");
	scanf("%lf", &init_amount);

	printf("Tax Amount: %.2f%\n", TAX);
	printf("Total Amount: %.2lf\n", TAX / 100 * init_amount + init_amount);

	return 0;
}
