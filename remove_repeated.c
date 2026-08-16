#include <stdio.h>

int main()
{
    char str[100];o

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    printf("Result: ");
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != str[i + 1])
            printf("%c", str[i]);
    }
    return 0;
}
