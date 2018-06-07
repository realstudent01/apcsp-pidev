#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// CURRENT PROBLEMS: Some words do not print the blank lines (like bagpipes), the game does not end even though there is code that makes it so that it should end, this is not connected to the website at all.
int main()
{
 char wordArr[][25] = { "soldier\0", "acquaintance\0", "capture\0", "pair\0", "bedroom\0", "beach\0", "support\0", "ice\0", "sensitivity\0", "fabricate\0","producer\0", "awkward\0", "bagpipes\0", "dwarves\0", "zombie\0", "quizzes\0", "queue\0", "weekend\0" };
 char unguessedAlphabet[26] = "abcdefghijklmnopqrstuvwxyz";
 char incorrectguesses[26];

 srand(time(NULL));

 size_t length = sizeof(wordArr)/sizeof(wordArr[0]);
 int n = rand() % (length);
 int l = strlen(wordArr[n]);
 char wordString[l+1];
 int i;
 char a;
 int round;

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
 displaywordB[l] = '\0';
 char displaywordA[l];    // display word after
 displaywordA[l] = '\0';

while ( strcmp(wordString, displaywordA) != 1 )
{
 char input[256];
 char letter;
  while (1)
  {
   printf("Guess a letter\n");
   fgets(input, 256, stdin);
   if (sscanf(input, "%c", &letter) == 1)
    {
     break;
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

  if (strcmp(displaywordB, displaywordA) == 0) //checks if the before and after are the same and if they are then the guess was wrong, if they're not the same then the guess was right
  {		// THING TO ADD: use ascii table and some math to go to where in the unused alphabet string the correct guess was in order to move that letter to the already guessed string
   printf("incorrect\n");
   round++;
   incorrectguesses[round] = letter;
  } // add the part so that the available alphabet is displayed, and when a letter is guessed it is removed fromt there
  else
  {
   printf("correct\n");
  }
 printf("%s\n", displaywordA);

  for (i = 0; i < l; i++)		//sets display word before to the display word after from the last round so that it is ready for next round
  {
   displaywordB[i] = displaywordA[i];
  }

  if (strcmp(displaywordB, wordString) == 1)
  {
   printf("You win\n");
   break;
  }
 }
}
