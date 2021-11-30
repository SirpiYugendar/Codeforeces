#include<stdio.h>
#include<stdlib.h>

void sort_array(short* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (*(a + j) <= *(a + i))
			{
				short temp = *(a + j);
				*(a + j) = *(a + i);
				*(a + i) = temp;
			}
		}
	}
}


int main(void)
{
	int n;
	scanf("%i", &n);
	short* a = (short*) malloc(n * sizeof(short));

	for (int i = 0; i < n; i++)
	{
		scanf("%hd", (a + i));
	}
	sort_array(a, n);
	for (int i = 0; i < n; i++)
	{
		printf("%hd ", *(a + i));
	}
	free(a);
}
