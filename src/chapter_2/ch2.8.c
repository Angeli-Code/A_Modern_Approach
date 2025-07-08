#include <stdio.h>

#define MONTH_1_FORMULA loan_amount + (loan_amount * interest_rate) - monthly_payment
#define MONTH_2_FORMULA loan_amount + (loan_amount * interest_rate) - monthly_payment
#define MONTH_3_FORMULA loan_amount + (loan_amount * interest_rate) - monthly_payment

/* Chapter 2 Exercise 8
 * --------------------
 * Write a program that calculates the remaining balance on a loan after the first, second, and
 * third monthly payments:
 * Enter amount of loan: 20000.00
 * Enter interest rate: 6.0
 * Enter monthly payment: 386.66
 * Balance remaining after first payment: $19713.34
 * Balance remaining after second payment: $19425.25
 * Balance remaining after third payment: $19135.71
 * Display each balance with two digits after the decimal point. Hint: Each month, the balance
 * is decreased by the amount of the payment, but increased by the balance times the monthly
 * interest rate. To find the monthly interest rate, convert the interest rate entered by the user to
 * a percentage and divide it by 12
 */

int main(void)
{

	float loan_amount;
	float interest_rate;
	float monthly_payment;

	printf("Enter loan amount: ");
	scanf("%f", &loan_amount);

	printf("Enter Interest Rate: ");
	scanf("%f", &interest_rate);

	interest_rate /= 100;
	interest_rate /= 12;

	printf("Enter Monthly Payment: ");
	scanf("%f", &monthly_payment);

	printf("Balance remaining after first payment: %.2f\n", MONTH_1_FORMULA); 
	loan_amount = MONTH_1_FORMULA;
	printf("Balance remaining after second payment: %.2f\n", MONTH_2_FORMULA); 
	loan_amount = MONTH_2_FORMULA;
	printf("Balance remaining after third payment: %.2f\n", MONTH_3_FORMULA); 
	loan_amount = MONTH_3_FORMULA;

	return 0;
}
