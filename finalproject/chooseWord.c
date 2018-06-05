#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main()
{
 char wordArr[11][25] = { "soldier\0", "acquaintance\0", "capture\0", "pair\0", "bedroom\0", "beach\0", "support\0", "ice\0", "sensitivity\0", "fabricate\0","producer\0" };
 srand(time(0));
 int n = rand() % (11);
 int l = strlen(wordArr[n]);
 char wordString[l+1];
 int i;
 char a;

 for ( i = 0; i < l; i++)
 {
  a = wordArr[n][i];
  wordString[i] = a;
 }

 wordString[l] = '\0';

 printf("%s\n", wordString);

}
