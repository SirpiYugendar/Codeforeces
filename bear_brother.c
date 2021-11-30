#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int limak, bob, years = 0;
	scanf("%i %i", &limak, &bob);
	
	for (years; limak <= bob && (limak >= 1 || limak <= bob) && (bob >= limak || bob <= 10); years++)
	{
		limak *= 3;
		bob *= 2;
	}
	printf("%i\n", years);
}
