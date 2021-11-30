#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = (char*) malloc(sizeof(char) * 50), *t = (char*) malloc(sizeof(char) * 50);
    scanf("%s", s);
    scanf("%s", t);
    int s_len = strlen(s), t_len = strlen(t), i, j = 0;
    for (i = 0; i < t_len; i++)
    {
        if (*(t + i) == *(s + j))
            ++j;
    }
    printf("%i", j + 1);
    free(s);
    free(t);
}
