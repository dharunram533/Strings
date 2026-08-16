#include <stdio.h>

void remove_character(char str[], char ch)
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ch)
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}
int main()
{
    char str[100];
    char ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter character to remove: ");
    scanf("%c", &ch);
    remove_character(str, ch);
    printf("Result: %s", str);
    return 0;
}
