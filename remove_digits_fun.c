#include <stdio.h>
#include <ctype.h>o

void remove_digits(char str[])
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (!isdigit(str[i]))
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
    remove_digits(str);
    printf("Without digits: %s", str);
    return 0;
}
