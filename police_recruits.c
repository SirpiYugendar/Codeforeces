#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	scanf("%i", &n);

	if (n >= 1 && n <= 1000000)
	{
		int* ar = (int*) malloc(n * sizeof(int));

		for (int i = 0; i < n; i++)
		{
			scanf("%i", (ar + i));
		}
		int i, h = 0, ut = 0;
		//Crime occured
		for (i = 0; i < n; i++)
		{
			if (*(ar + i) > 0)
			{
				h += *(ar + i);
				continue;
			}
			if (h > 0 && *(ar + i) < 0)
			{
				h += *(ar + i);
				continue;
			}
			if (*(ar + i) < 0)
			{
				ut++;
				continue;
			}
		}
				
		printf("%i",ut);		
		free(ar);
	}
}
