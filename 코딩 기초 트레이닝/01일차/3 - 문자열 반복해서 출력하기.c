#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);

    int i = 0;

    for (i = 0; a > i; i++)
        printf("%s", s1);

    return 0;
}