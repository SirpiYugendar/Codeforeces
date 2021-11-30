#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[1000];
    scanf("%[^\n]", a);
    int len = strlen(a), a_count = 0;
    for (int i = 0; i < len; i++) {
        if (isalpha(a[i]))
            a_count++;
    }
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (isalpha(a[i]) && isalpha(a[j]))
                if (a[i] == a[j]) {
                    a_count--;
                    a[j] = '0';
                }
        }
    }
    printf("%i\n", a_count);
    return 0;
}
