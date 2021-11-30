#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, d = 0;
    long long x;
    scanf("%i %lli", &n, &x);
    char* s = malloc(sizeof(char) * n);
    int* c = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %c %i", (s + i), (c + i));
        if (s[i] == '-')
            c[i] *= -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (x + c[i] < 0)
            d++;
        else
            x += c[i];
    }
    printf("%lli %i\n", x, d);
    free(s);
    free(c);
    return 0;
}
