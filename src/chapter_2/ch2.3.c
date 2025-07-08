#include <stdio.h>

#define PI 3.14

/* 
 * Chapter 2 Exercise 3
 * --------------------
 * Modify the program of Programming Project 2 so that it prompts the user to enter the radius
 * of the sphere.
 */

int main(void)
{
	double volume;
	double radius;

	printf("Sphere Calculator\n");
	printf("-----------------\n");
	printf("Enter Radius: ");
	scanf("%lf", &radius);

	volume = 4.0/3.0 * PI * (radius * radius * radius);

	printf("Sphere Volume: %lf\n", volume);

	return 0;
}
