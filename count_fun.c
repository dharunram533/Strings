#include <stdio.h>
int frequency(char str[], char ch)
{
    int i;
    int count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char str[100];
    char ch;
    int count;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter character: ");
    scanf("%c", &ch);
    count = frequency(str, ch);
    printf("Frequency = %d\n", count);
    return 0;
}
