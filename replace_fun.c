#include <stdio.h>

void replace_character(char str[], char old, char new)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == old)
        {
            str[i] = new;
        }
    }
}
int main()
{
    char str[100];
    char old, new;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter character to replace: ");
    scanf("%c", &old);
    getchar();
    printf("Enter new character: ");
    scanf("%c", &new);
    replace_character(str, old, new);
    printf("Result: %s", str);
    return 0;
}
