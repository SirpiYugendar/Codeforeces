#include<stdio.h>
#include<stdlib.h
#include<string.h>
#include<ctype.h>

int main(void)
{
	char* word = (char*) malloc(100 * sizeof(char));

	scanf("%s", word);

	int uc = 0, lc = 0, n = strlen(word);

	for (int i = 0; i < n; i++)
	{
			if (isupper(*(word + i)))
			{
				uc++;
			}
			else
			{
				lc++;
			}
	}
	if (uc > lc)
	{
		for (int i = 0; i < n; i++)
		{
			*(word + i) = toupper(*(word + i));
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			*(word + i) = tolower(*(word + i));
		}
	}
	printf("%s", word);
	free(word);
}
