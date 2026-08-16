#include <stdio.h>

int main()
{
    char str[100], ch;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter character: ");
    scanf(" %c", &ch);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("First occurrence at position %d", i + 1);
            return 0;
        }
    }
    printf("Character Not Found");
    return 0;
}
