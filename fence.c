#include <stdio.h>

int main(void)
{
	int p, h, a, sum = 0;
	printf("Enter p and h");
	scanf("%i %i", &p, &h);
	if ((h >= 1 || h <= 1000) && (p >= 1 || p <= 1000))
	{
		for (int i = 0; i < p; i++)
		{
		scanf("%i", &a);
			if (a >= 1 || a <= 2 * h)
			{
				if (a > h)
				{
					sum += 2;
				}
				else if (a >= 1)
				{
					sum +=1;
				}
				else
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	printf("%i\n", sum);
}