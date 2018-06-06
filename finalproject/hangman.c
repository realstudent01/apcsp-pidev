#include <stdio.h>
#include <string.h>
#include "chooseWord.h"

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
 char letter;
// char word[1][];
 char word[] = &wordString;

 word[] = chooseWord();
 letter = getCharFromUser();

 printf("%s     %c\n", word, letter);


}
