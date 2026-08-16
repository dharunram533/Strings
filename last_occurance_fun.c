#include <stdio.h>
int lastOccurrence(char str[], char ch)
{
    int index = -1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            index = i;
    }
    return index;
}
int main()
{
    char str[100], ch;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character: ");
    scanf("%c", &ch);
    int result = lastOccurrence(str, ch);
    if (result != -1)
        printf("Last occurrence of '%c' is at index %d", ch, result);
    else
        printf("Character not found");
    return 0;
}
