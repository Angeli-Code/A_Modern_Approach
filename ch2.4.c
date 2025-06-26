#include <stdio.h>

#define TAX 0.5

/*
 * A program that calculates 5% tax on an amount given by a user
 */

void read_init_amount(double *init_amount)
{
	printf("Enter Amount: ");
	scanf("%lf", init_amount);
}

void calc_total(double *init_amount, double *total_amount)
{
	*total_amount = *init_amount + (*init_amount * TAX);
}

void display_total(double *total_amount)
{
	printf("Total Amount: %.2f\n", *total_amount);
}

int main(void)
{
	double init_amount;
	double total_amount;

	read_init_amount(&init_amount);
	calc_total(&init_amount, &total_amount);
	display_total(&total_amount);

	return 0;
}
