#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    char* ar = (char*) malloc(100 * sizeof(char));
    for (int i = 0, n = strlen(ar); i < n; i++)
    {
        scanf("%c", (ar + i));
    }
       

    free(ar);
}
