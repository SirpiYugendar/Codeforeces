#include <stdio.h>
#include <string.h>

int main()
{
    char in[100];
    scanf("%s", in);
    for (int i = 0, l = strlen(in); i < l - 2; i+=2)
    {
        for (int j = i + 2; j < l; j+=2)
        {
            if (in[i] > in[j])
            {
                in[i] += in[j];
                in[j] = in[i] - in[j];
                in[i] -= in[j];
            }
        }
    }
    printf("%s\n", in);
    return 0;
}
