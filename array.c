#include <stdio.h>

int arrayAdd(int arr[], int s, int n)
{
 for (int i = 0; i < s; i++)
 {
  arr[i] = arr[i] + n;
 }
}

int main()
{
 int arr[10];

 for (int i = 0; i < 10; i++)
  {
   arr[i] = i * i;
   printf("%d\n", arr[i]);
  }
 arrayAdd(arr, 10, 5);
 for (int i=0; i < 10; i++)
  {
   printf("%d\n", arr[i]);
  }
}



