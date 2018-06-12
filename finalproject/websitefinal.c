#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* round will be used for the number of lost lives
For the website we can just take out the parts of the code that printf stuff and just have the website display the current values of unguessedAlphabet, incorrectguesses, and the display words
*/

int main()
{
 char wordArr[][25] = { "soldier", "acquaintance", "capture", "pair", "bedroom", "beach", "support", "ice", "sensitivity", "fabricate","producer", "awkward", "dwarves", "zombie", "quizzes", "queue", "weekend" };
 char unguessedAlphabet[27] = "abcdefghijklmnopqrstuvwxyz\0";
 char incorrectguesses[10];
 incorrectguesses[8] = '\0';

 srand(time(NULL));

 size_t length = sizeof(wordArr)/sizeof(wordArr[0]);
 int n = rand() % (length);
 int l = strlen(wordArr[n]);
 char wordString[l+1];
 int i;
 char a;
 int round;
 int win = 0;
 int num;

 for ( i = 0; i < l; i++)
 {
  a = wordArr[n][i];
  wordString[i] = a;
 }
 wordString[l] = '\0';

 //printf("%s\n", wordString);


 char displaywordB[l];    // display word before
 for ( i = 0; i < l; i++)
 {
  displaywordB[i] = '_';
 }
 displaywordB[l] = '\0';
 char displaywordA[l];    // display word after
 displaywordA[l] = '\0';

 printf("%s\n", displaywordB);
 while (win == 0)
 {
  char input[256];
  char letter;

  if (strcmp(displaywordB, wordString) == 0)
  {
   win = 1;
   printf("You Win!\n");
   break;
  }

 if ( round > 7 )
 {
  printf("You Lose! The word was: %s\n", wordString);
  break;
 }

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
   num = letter - 97;
   unguessedAlphabet[num] = '_';
   printf("%s\n", unguessedAlphabet);
   printf("%s\n", incorrectguesses);
  }
  else
  {
   printf("correct\n");
   num = letter - 97;
   unguessedAlphabet[num] = '_';
   printf("%s\n", unguessedAlphabet);
  }

 printf("%s\n", displaywordA);

  for (i = 0; i < l; i++)		//sets display word before to the display word after from the last round so that it is ready for next round
  {
   displaywordB[i] = displaywordA[i];
  }
 }


 int lives = 8 - round;

 FILE *output;
 char *mode = "w";
 char outputFileName[] = "/home/student1/website/output.html";

 output = fopen("/home/student1/website/output.html", mode);

 if (( output = fopen("/home/student1/website/output.html", mode)) == NULL)
{
 printf("Error opening file\n");
 exit(1);
}

 fprintf(output, "The word that you were left with was %s, the actual word was %s, the number of lives you had left was %d\n", displaywordA, wordString, lives);
 fclose(output);
}
