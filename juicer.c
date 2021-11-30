#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, b, d, count = 0, sum = 0, *ar = (int*) malloc(sizeof(int) * 1000000);
    scanf("%i %i %i", &n, &b, &d);
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &ar[i]);
        if (ar[i] <= b)
        {
            sum += ar[i];
            if (sum > d)
            {
                count++;
                sum = 0;
            }
        }
    }
    free(ar);
    printf("%i\n", count);
}
