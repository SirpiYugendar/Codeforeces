#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int n;
	scanf("%i", &n);

	if (n >= 1 && n <= 100000)
	{	int count = 0;
		int* ar = (int*) malloc(n * sizeof(int));

		//put elements into array
		for (int i = 0; i < n; i++)
		{
			scanf("%i", (ar + i));
		}
		int i, j, temp;
        // This is a comment to check the features of vim.
		for (i = 0, j = i + 1; i < n - 1; i++, j++)
		{
			if (*(ar + i) != *(ar + j))
			{
				count++;
				temp = *(ar + j);
			}
		}
		count++;
		free(ar);
		printf("%i", count);
	}
}
