#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
	int n, count = 0;
	scanf("%i", &n);

	char* ar = (char*) malloc(n * sizeof(char));
	scanf("%s", ar);
	for (int i = 0, j = i + 1; i < n - 1; i++, j++)
	{
		if (*(ar + i) == *(ar + j))
		{
			count++;
		}
	}
	printf("%i", count);
}
