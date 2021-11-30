#include <stdio.h>

int main(void)
{
    int w, y, poss = 6, next = 6;
    scanf("%i %i", &w, &y);
    int max = y;
    if (w > y)
        max = w;
    poss -= max - 1; 
    if (next % poss == 0)
    {
        next /= poss;
        poss /= poss;
    }
    else if (next % 2 == 0 && poss % 2 == 0)
    {
        poss /= 2;
        next /= 2;
    }
    printf("%i/%i\n", poss, next);
}
