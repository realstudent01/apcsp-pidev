#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
 char wordArr[][25] = { "soldier\0", "acquaintance\0", "capture\0", "pair\0", "bedroom\0", "beach\0", "support\0", "ice\0", "sensitivity\0", "fabricate\0","producer\0", "awkward\0", "bagpipes\0", "dwarves\0", "zombie\0", "quizzes\0", "queue\0", "weekend\0" };
 char unguessedAlphabet[26] = "abcdefghijklmnopqrstuvwxyz";
// char incorrectguesses[];

 srand(time(NULL));

 size_t length = sizeof(wordArr)/sizeof(wordArr[0]);
 int n = rand() % (length);
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

 char displaywordB[l];    // display word before
 for ( i = 0; i < l; i++)
 {
  displaywordB[i] = '_';
 }
 char displaywordA[l];    // display word after

//while ( strcmp(wordString, displaywordA) == 0 )
while (1)
{
 char input[256];
 char letter;
  while (1)
  {
   printf("Guess a letter\n");
   fgets(input, 256, stdin);
   if (sscanf(input, "%c", &letter) == 1)
    {
     continue;		// I think tihs is the problem because it is breaking out of both while loops
    }
  }

   for ( i = 0; i < l; i++)
   {
    if ( displaywordB[i] == '_' )
    {
     if (wordString[i] == letter)
     {
      displaywordA[i] = letter;
     }
     else
     {
      displaywordA[i] = '_';
     }
    }
   }

  if (strcmp(displaywordB, displaywordA) == 1) //checks if the before and after are the same and if they are then the guess was wrong, if they're not the same then the guess was right
  {		// THING TO ADD: use ascii table and some math to go to where in the unused alphabet string the correct guess was in order to move that letter to the already guessed string
   printf("incorrect\n");
  }
  else
  {
   printf("correct\n");
  }
 printf("%s\n", displaywordA);

  for (i = 0; i < l; i++)		//sets display word before to the display word after from the last round so that it is ready for next round
  {
   displaywordB[i] = displaywordA[i];
  }
 }
}
