#include <stdio.h>

int main( int argc, char* argv[])
{
 int r1;
 int r2;
 int i;
 float r;
 if ( *argv[1] > *argv[2])   //argc[1] is a and argc[2] is b
 {
  r1 = *argv[2];
  r2 = *argv[1];
 }
 else
 {
  r1 = *argv[1];
  r2 = *argv[2];
 }

 for ( i = r1; i > r2; i++)
 {
  float r = i*i*3.1415;
  printf("A circle with radus %d has an area of %f\n", i, r);
 }
}
