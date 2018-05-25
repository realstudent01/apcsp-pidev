#include <stdio.h>

float areaofcircle(float r)
{
	float a = r*r*3.14;
	//printf("the area is equal to %f\n", a);
	return a;
}


int main()
{

	for(float i = 3.5; i < 12.5; i++)
	{
		float a;
		a = areaofcircle(i);
		printf("the area of the circle with radius %f is equal to %f\n", i, a);
	}
}
