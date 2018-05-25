#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 1.23;
  float e = 4.56;
  float* ptrtod = &d;
  float* ptrtoe = &e;

  printf("The value of d is %f\n", d);
  printf("The value of ptrtod is %d\n", ptrtod);
  printf("The value of e is %f\n", e);
  printf("The value of ptrtoe is %d\n", ptrtoe);

  float temp;
  temp = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = temp;

  printf("The value of d is %f\n", d);
  printf("The value of ptrtod is %d\n", ptrtod);
  printf("The value of e is %f\n", e);
  printf("The value of ptrtoe is %d\n", ptrtoe);


}
