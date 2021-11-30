#include<stdio.h>

int main(void)
{
	int n, ans = 0;
	scanf("%i", &n);
	for (int i = 0; i < n; i++)
	{
		int p, v, t;
		scanf("%i %i %i", &p, &v, &t);
		ans += (p+v+t >= 2);
	}
	printf("%i", ans);
}
