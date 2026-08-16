#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    printf("Uppercase letters: ");
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            printf("%c", str[i]);
    }
    return 0;
}
