#include <stdio.h>
#include <stdlib.h>
const int MAX = 4;
int main(void)
{
    int *ar = (int*) malloc(sizeof(int) * MAX), count = 0;
    for (int i = 0; i < MAX; i++)
        scanf("%li", (ar + i));
    for (int i = 0; i < MAX; i++)
    {
        int key = *(ar + i);
        for (int j = i + 1; j < MAX; j++)
        {
            if (*(ar + j) == key)
            {
                count++;
                break;
            }
        }
    }
    printf("%i", count);
    free(ar);
}
