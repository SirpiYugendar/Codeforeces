#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    //boy or girl codeforeces
    char* s = (char*)malloc(100 * sizeof(char));
	scanf("%s", s);
	int count = strlen(s);
	int k = strlen(s);
	for (int i = 0; i < k - 1; i++)
	{
		for (int j = i + 1; j < k; j++)
		{
			if (*(s + i) == *(s + j))
			{
				count--;
				break;
			}
		}
	}
	if (count % 2 != 0)
	{
		printf("IGNORE HIM!");
	}
	else
	{
		printf("CHAT WITH HER!");
	}
}
