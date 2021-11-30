#include <stdio.h>
#include <math.h>

int main(void)
{
    float a;
    scanf("%f", &a);
    int b = ceil(a);
    printf("a %f b %i\n", a, b);
    return 0;
}
