#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int chooseWord()
{
 char wordArr[][25] = { "soldier\0", "acquaintance\0", "capture\0", "pair\0", "bedroom\0", "beach\0", "support\0", "ice\0", "sensitivity\0", "fabricate\0","producer\0", "awkward\0", "bagpipes\0", "dwarves\0", "zombie\0", "quizzes\0", "queue\0", "weekend\0" };
 srand(time(NULL));

 size_t length = sizeof(wordArr)/sizeof(wordArr[0]);
 int n = rand() % (length);
 int l = strlen(wordArr[n]);
 char wordString[l+1];
 int i;
 char a;

// printf("%d\n", length);
 for ( i = 0; i < l; i++)
 {
  a = wordArr[n][i];
  wordString[i] = a;
 }

 wordString[l] = '\0';

 printf("%s\n", wordString);
}


char getCharFromUser()
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
	return letter;
}


int main()
{
 char wordString[];
 char letter;
 char word[] = *wordString;

 word[] = chooseWord();
 letter = getCharFromUser();

 printf("%s     %c\n", word, letter);


}
