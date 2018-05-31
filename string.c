#include <stdio.h>
#include <string.h>

int main()
{
 int i;
 int num = 97;
 char c = 'a';
 char alphabet[27];

 for ( i = 0; i < 26; i++)
 {
  alphabet[i] = c;
  c++;
 }
 alphabet[26] = '\0';
 printf("%s\n", alphabet);

 char alphabet2 [27] = "abcdefghijklmnopqrstuvwxyz\0";
 printf("%s\n", alphabet2);

 if (strcmp(alphabet, alphabet2) == 0 )
 {
  printf("the strings are identical\n");
 }
 else
 {
  printf("the strings are different\n");
 }

 for ( i = 0; i < 26; i++)
 {
  alphabet[i] = alphabet[i] - 32;
 }
 printf("%s\n", alphabet);

 if (strcmp(alphabet, alphabet2) == 0 )
 {
  printf("the strings are identical\n");
 }
 else
 {
  printf("the strings are different\n");
 }

 char alphabet3[54];

 strcpy(alphabet3, alphabet);
 strcat(alphabet3, alphabet2);

 printf("%s\n", alphabet);
 printf("%s\n", alphabet2);
 printf("%s\n", alphabet3);
}
