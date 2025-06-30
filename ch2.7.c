#include <stdio.h>

/*
 * Program that allows a user to input a money value and then displays to the
 * user the minimum number of 20,10,5,1 dollar bills needed to pay that amount
 */

void read_amount(int *amount)
{
	printf("Enter Amount: ");
	scanf("%d",amount);
}

void calc_min_bills(int *amount, int *ones, int *fives, 
		int *tens, int *twenties)
{
	*twenties = *amount / 20;
	*amount = *amount % 20;
	*tens = *amount / 10;
	*amount = *amount % 10;
	*fives = *amount / 5;
	*amount = *amount % 5;
	*ones = *amount; // The remaining amount should be < 5 at this point
}

void display(int *ones, int *fives, int *tens, int *twenties)
{
	printf("Min Bills\n");
	printf("---------\n");
	printf("Twenties: %d\n", *twenties);
	printf("Tens: %d\n", *tens);
	printf("Fives: %d\n", *fives);
	printf("Ones: %d\n", *ones);
}

int main(void)
{
	int amount;
	int ones;
	int fives;
	int tens;
	int twenties;

	read_amount(&amount);
	calc_min_bills(&amount, &ones, &fives, &tens, &twenties);
	display(&ones, &fives, &tens, &twenties);

	return 0;
}
