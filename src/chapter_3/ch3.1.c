#include <stdio.h>

/* Chapter 3 Exercise 1
 * --------------------
 * Write a program that accepts a date from the user in the form mm/dd/yyyy and then
 * displays it in the form yyyymmdd:
 * Enter a date (mm/dd/yyyy): 2/17/2011
 * You entered the date 20110217
 */

int main(void)
{
	int day,month,year;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month,&day,&year);
	printf("You entered the date %d%2.2d%d\n", year,month,day);

	return 0;
}
