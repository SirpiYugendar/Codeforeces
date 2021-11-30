#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	scanf("%i", &n);
	if (n >= 1 && n <= 1000)
	{
		int* ar = (int*) malloc(n * sizeof(int));
		int *b, *e, sc = 0, dc = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%i", (ar + i));
		}
		b = (ar + 0);
		e = (ar + n - 1);
		while (b < e)
		{
			//s
			if (*b > *e)
			{
				sc += *b;
				b++;	
			}
			else if (*e > *b)
			{	
				sc += *e;
				e--;
			}
			//d
			if (*b > *e)
			{	
				dc += *b;
				b++;
			}
			else if (*e > *b)
			{	
				dc += *e;
				e--;
			}
		}
		if (n % 2 != 0)
		sc += *b;
		else
		dc += *b;
		printf("%i %i", sc, dc);
		free(ar);
	}
}
