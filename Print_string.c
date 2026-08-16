#include <stdio.h>

int main()
{
    char s[10];

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    printf("String: %s", s);

    return 0;
}
