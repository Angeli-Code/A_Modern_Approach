#include <stdio.h>

/* Chapter 3 Exercise 2
 * --------------------
 * Write a program that formats product information entered by the user. A session with the
 * program should look like this:
 * Enter item number: 583
 * Enter unit price: 13.5
 * Enter purchase date (mm/dd/yyyy): 10/24/2010
 * Item 	Unit		Purchase
 * 		Price		Date
 * 583 		$ 13.50 	10/24/2010
 * The item number and date should be left justified; the unit price should be right justified.
 * Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.
 */

int main(void)
{

	int item_num;
	float unit_price;
	int p_date_day, p_date_month, p_date_year;

	printf("Enter item number: ");
	scanf("%d", &item_num);

	printf("Enter unit price: ");
	scanf("%f", &unit_price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &p_date_day, &p_date_month, &p_date_year);

	printf("Item\tUnit\tPurchase\n");
	printf("\tPrice\tDate\n");
	printf("%-4d\t$ %7.2f\t%d/%d/%d\n", item_num, 
					   unit_price, 
					   p_date_day, 
					   p_date_month, 
					   p_date_year);

	return 0;
}
