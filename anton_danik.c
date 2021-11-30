#include <stdio.h>

int main(void)
{
	int n, an = 0, dn = 0;
	scanf("%i",&n);
	char p[n];
	scanf("%s", &p);
	
	for (int i = 0; i < n && (n > 1 || n < 100000); i++)
	{
		if (p[i] == 'A')
		{
			an++;
		}
		else
		{
			dn++;
		}
	}
	if (an > dn)
	{
		printf("Anton");
	}
	else if (dn > an)
	{
		printf("Danik");
	}
	else
	{
		printf("Friendship");
	}
}