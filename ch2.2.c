#include <stdio.h>

#define PI 3.14159265

/*
 * Calculate the volume of a sphere with a value retrieved from the user.
 *
 * Lesson Learned: Must explicitly write numbers with 2.0 if you want them to be treated as doubles/floats
 */

void display_menu()
{
	printf("------------------------\n");
	printf("Sphere Volume Calculator\n");
	printf("------------------------\n");
	printf("Enter Radius: ");
}

void read_radius(double *radius)
{
	scanf("%lf", radius);
}

void calc_volume(double *radius, double *volume)
{
	*volume =  4.0 / 3.0 * PI * (*radius) * (*radius) * (*radius);
}

void display_volume(double *volume)
{
	printf("\nVolume: %.2lf\n", *volume);
}

int main(void)
{
	double radius;
	double volume;

	display_menu();
	read_radius(&radius);
	calc_volume(&radius, &volume);
	display_volume(&volume);

	return 0;
}
