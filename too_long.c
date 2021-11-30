#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%i", &n);
    char in[100], len;
    while (n--)
    {
        scanf("%s", in);
        len = strlen(in);
        if (len > 10)
        {
            printf("%c%i%c\n", in[0], len - 2, in[len - 1]); 
        }
        else
            printf("%s\n",in);
    }
}
