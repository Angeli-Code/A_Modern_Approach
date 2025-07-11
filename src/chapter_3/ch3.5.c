#include <stdio.h>

/* Chapter 3 Exercise 5
 * --------------------
 * Write a program that asks the user to enter the numbers from I to 16 (in any order) and then
 * displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
 * and diagonals:
 * Enter the numbers from 1 to 16 in any order:
 * 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
 */

int main(void)
{

	int a,b,c,d;
	int e,f,g,h;
	int i,j,k,l;
	int m,n,o,p;

	int row_total_1;
	int row_total_2;
	int row_total_3;
	int row_total_4;

	int col_total_1;
	int col_total_2;
	int col_total_3;
	int col_total_4;

	int diag_total_1;
	int diag_total_2;

	printf("Enter the numbers from 1-16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
	       &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);

	printf("%2d %2d %2d %2d\n", a, b, c, d);
	printf("%2d %2d %2d %2d\n", e, f, g, h);
	printf("%2d %2d %2d %2d\n", i, j, k, l);
	printf("%2d %2d %2d %2d\n", m, n, o, p);

	row_total_1 = a + b + c + d;
	row_total_2 = e + f + g + h;
	row_total_3 = i + j + k + l;
	row_total_4 = m + n + o + p;

	col_total_1 = a + e + i + m;
	col_total_2 = b + f + j + n;
	col_total_3 = c + g + k + o;
	col_total_4 = d + h + l + p;

	diag_total_1 = a + f + k + p;
	diag_total_2 = d + g + j + m;

	printf("Row Sums: %d %d %d %d\n", row_total_1, row_total_2, row_total_3, row_total_4);
	printf("Column Sums: %d %d %d %d\n", col_total_1, col_total_2, col_total_3, col_total_4);
	printf("Diagonal Sums: %d %d \n", diag_total_1, diag_total_2);

	return 0;
}
