#include<stdio.h>
#include<stdlib.h>

	
void return_index(int (*p)[5], int mid, int a, int b)
{
	int count = 0;
	while (a != mid || b != mid)
	{
		if (a > mid)
		{
			a--;
			count++;
		}
		else if (a < mid)
		{
			a++;
			count++;
		}

		if (b > mid)
		{
			b--;
			count++;
		}
		else if (b < mid)
		{
			b++;
			count++;
		}
	}
	printf("%i\n", count);
}

int main(void)
{
	int mat[5][5], a, b;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%i", &mat[i][j]);
            if (mat[i][j] == 1)
            {
                a = i;
                b = j;
            }
		}
	}
	return_index(mat, 3, a, b);
}
