#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;
  int c = 2;
  int d = 3;

  // if statement to test is a is equal to 0
 if (a == 0)
 {
	printf("a is 0\n");
 }
 else
 {
	printf("a is not 0\n");
 }

 if (a != b)
 {
	printf("a is not equal to b\n");
 }
 else
 {
	printf("a is equal to b\n");
 }

 if (a > b)
 {
	printf("a is greater than b\n");
 }
 else
 {
	printf("a is less than b\n");
 }

 if (d >= c)
 {
	printf("d is greater than or equal to c\n");
 }
 else
 {
	printf("d is less than c\n");
 }

 if (a == 0 && b == 1)
 {
	printf("a is equal to 0 and b is equal to 1\n");
 }
 else
 {
	printf("a is not equal to 0 or b is not equal to 1, or both\n");
 }

 if (a == 0 || b == 0)
 {
	printf("either a is equal to 0 or b is equal to 0\n");
 }
 else
 {
	printf("neither a nor b is equal to 0\n");
 }

 if  (!(a == 0))
 {
	printf("a is not equal to 0\n");
 }
 else
 {
	printf("a is equal to 0\n");
 }
}
