#include <stdio.h>
int is_vowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' ||
        ch == 'O' || ch == 'U')
    {
        return 1;
    }
    return 0;
}
void remove_vowels(char str[])
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (!is_vowel(str[i]))
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
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    remove_vowels(str);
    printf("Without vowels: %s", str);
    return 0;
}
