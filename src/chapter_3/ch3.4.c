#include <stdio.h>

/* Chapter 3 Exercise 4
 * --------------------
 * Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-
 * xxxx and then displays the number in the form xxx.xxx.xxx:
 * Enter phone number [ (xxx) xxx-xxxx]: (404) 817-6900
 * You entered 404.817.6900
 */

int main(void)
{
	int num1, num2, num3;	

	printf("Enter Phone Number [ (xxx) xxx-xxxx]: ");
	scanf("(%d)%d-%d", &num1, &num2, &num3); 

	printf("You entered: %d.%d.%d\n", num1, num2, num3); 

	return 0;
}
