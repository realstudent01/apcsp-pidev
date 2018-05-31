#include <stdio.h>

int getlowernumber()
{
 int r;
 int r1;
 while (1)
 {
  char input[256];
  printf("enter the integer that you want to be the lower radius bound of the output areas\n");
  fgets(input, 256, stdin);
  r = sscanf(input, "%d", &r1);
  if ( r != 1 )
  {
   printf("that's not a number, try again\n");
  }
  else
  {
   break;
  }
 }
 return r1;
}

int getuppernumber()
{
 int r;
 int r2;
 while (1)
 {
  char input[256];
  printf("enter the integer that you want to be the upper radius bound of the ouput areas\n");
  fgets(input, 256, stdin);
  r = sscanf(input, "%d", &r2);
  if ( r != 1)
  {
   printf("that's not a number, try again\n");
  }
  else
  {
   break;
  }
 }
 return r2;
}


int main( int argc, char* argv[])
{
 int r1;
 int r2;
 int i;
 float area;
 int a;
 int b;


 if ( argc == 1)
 {
  r1 = getlowernumber();
  r2 = getuppernumber();
 }
 else
 {
  sscanf(argv[1], "%d",&a);
  sscanf(argv[2], "%d",&b);

  if ( a > b )   //argc[1] is a and argc[2] is b
  {
   r1 = *&b;
   r2 = *&a;
  }
  else
  {
   r1 = *&a;
   r2 = *&b;
  }
 }
for ( i = r1; i > r2; i++)
 {
  float area = i * i * 3.1415;
  printf("A circle with radius %d has an area of %f\n", i, area);
 }
}
