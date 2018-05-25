#include<stdio.h>

int main()
{
  char a = 'e';
  int b = 123;
  float c = 3.141592365f;
  double d = 2.23;
  

	// print value and size of an int variable
	printf("char a has a value %c and size %d bytes.\n", a, sizeof(a));

	printf("int b has a value %d and size %d bytes.\n", b, sizeof(b));

	printf("float c has a value %f and size %d bytes.\n", c, sizeof(c));

	printf("double d has a value %g and size %d bytes.\n", d, sizeof(d));


}

