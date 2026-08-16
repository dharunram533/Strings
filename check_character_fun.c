#include <stdio.h>
int characterExists(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            return 1;
    }
    return 0;
}
int main()
{
    char str[100], ch;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character: ");
    scanf("%c", &ch);
    if (characterExists(str, ch))
        printf("Character exists in the string");
    else
        printf("Character does not exist");
    return 0;
}
