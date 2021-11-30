#include <stdio.h>

int main(void)
{
    int n, track, count = 0, row = 0, col = 0;
    scanf("%i", &n);
    int a[n], t[n][3];
    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &a[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        track = 1;
        for (int j = 0; j < n; ++j)
        {
            if (a[j] = track)
            {
                t[row][col] = j;
                ++col;
                ++count;
                ++track;
                a[j] = 0;
            }
            if (track == 3)
            {
                count++;
                break;
            }
        }
        if (track < 3)
        {
            break;
        }
    }
    printf("count: %i\n", count);
    printf("\n");
    return 0;
}
