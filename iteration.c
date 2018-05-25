#include <stdio.h>

int main ()
{
 int a = 5;
 int i;
 for ( i=0; i < 100; i++ )
  {
   if ( i%a == 0 )
    {
     printf("%d\n", i);
    }
  }
 //return 0;
}
