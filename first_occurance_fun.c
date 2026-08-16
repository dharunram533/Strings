#include <stdio.h>
int firstOccurrence(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            return i;
    }
    return -1;
}

int main()
{
    char str[100], ch;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character: ");
    scanf("%c", &ch);
    int result = firstOccurrence(str, ch);
    if (result != -1)
        printf("First occurrence of '%c' is at index %d", ch, result);
    else
        printf("Character not found");
    return 0;
}
