#include <stdio.h>

int main( int argc, char* argv[])
{
 int r1;
 int r2;
 int i;
 float r;
// if ( argv[0] > argv[1])   //argc[1] is a and argc[2] is b
// {
//  r1 = argv[1];
//  r2 = argv[0];
// }
// if ( argv[0] < argv[1])
// {
//  r1 = argv[0];
//  r2 = argv[1];
// }

int input1;
int input2;

if ( argc == 0)
 {
  printf("enter the integer that you want to be the lower range of the area of a circle output\n");
  fgets(input, 256, stdin);
  sscanf(input1, "%s", r1);
  printf("enter the integer that you want to be the upper range of the area of a circle output\n");
  fgets(input2, 256, stdin);
  sscanf(input, "%s", r2);
 }








 for ( i = r1; i > r2; i++)
 {
  float r = i*i*3.1415;
  printf("A circle with radus %d has an area of %f\n", i, r);
 }
}
