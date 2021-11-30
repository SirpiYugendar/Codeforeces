#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int n = 4;

	int* v = (int*) malloc(n * sizeof(int));

	char* c = (char*) calloc(1000000, sizeof(char));

	for (int i = 0; i < n; i++)
	{
		scanf("%i", (v + i));
	}
	scanf("%s", c);
	int sum = 0, size = strlen(c), *c_v = (int*) calloc(size, sizeof(int));
	char* temp = calloc(1, sizeof(char));
	for(int i = 0; i < size; i++)
	{
		*(temp) = *(c + i);
		*(c_v + i) = atoi(temp);
	}
	for (int i = 0; i < size; i++)
	{
		sum += *(v + (*(c_v + i) - 1));
	}
	printf("%i", sum);
	free(c);
	free(v);
	free(c_v);
}
