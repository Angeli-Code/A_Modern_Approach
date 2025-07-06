#include <stdio.h>

/* Chapter 2 Exercise 8
 * --------------------
 * Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
 * that amount using the smallest number of $20, $10, $5, and $1 bills:
 * Enter a dollar amount: 93^
 * $20 bills: 4
 * $10 bills: 1
 * $5 bills: 0
 * $1 bills: 3
 */

int main(void)
{
	printf("Enter Dollar Amount: ");
	scanf("%d", &amount);

	printf("Min Bills Needed:\n");
	printf("Twenties: %d\n", amount / 20);
	amount = amount % 20;
	printf("Tens: %d\n", amount / 10);
	amount = amount % 10;
	printf("Fives: %d\n", amount / 5);
	fives = amount / 5;
	printf("Ones: %d\n", amount);

	return 0;
}
