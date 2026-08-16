#include <stdio.h>

int main()
{
    char str[100], ch;
    int pos = -1;
    printf("Enter file name: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter character: ");
    scanf(" %c", &ch);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            pos = i + 1;
    }
    if (pos == -1)
        printf("Character Not Found");
    else
        printf("Last occurrence at position %d", pos);
    return 0;
}
