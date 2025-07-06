#include <stdio.h>

#define PI 3.14
#define RADIUS 10

/* 
 * Chapter 2 Exercise 2
 * --------------------
 * Write a program that computes the volume of a sphere with a 10-meter radius, using the 
 * formula v = 4/3 * PI * R^3. Write the fraction 4/3 as 4/3. (Try writing it as 4/3. 
 * What happens?) Hint: C doesn't have an exponentiation operator, so you'll need to 
 * multiply r by itself twice to compute r3
 *
 * Answer: If you use 4/3.. there won't be float division. It will result in 0
 */

int main(void)
{
	double volume;

	volume = 4.0/3.0 * PI * (RADIUS * RADIUS * RADIUS);

	printf("Sphere Radius: %lf\n", RADIUS); 
	printf("Sphere Volume: %lf\n", volume);

	return 0;
}
