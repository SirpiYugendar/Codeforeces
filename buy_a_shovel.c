#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int k, r, count = 1;
    scanf("%i %i", &k, &r);

    while (true)
    {
        if (((k * count) - r) % 10 == 0 || (k * count) % 10 == 0)
            break;
        else
            count++;
    }
    printf("%i", count);
}
