#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(void)
{	
	int result;
	char *f = (char*) malloc(100 * sizeof(char)), *s = (char*) malloc(100 * sizeof(char));
	scanf("%s", f);
	scanf("%s", s);
	int len = strlen(f);
	for (int i = 0; i < len; i++)
	{
		*(f + i) = tolower(*(f + i));
		*(s + i) = tolower(*(s + i));
	}
	result = strcmp(f, s);
	printf("%i", result);
	free(f);
	free(s);
}
