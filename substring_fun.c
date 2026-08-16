#include <stdio.h>
int substringExists(char str[], char sub[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        int j = 0;

        while (sub[j] != '\0' && str[i + j] == sub[j])
        {
            j++;
        }

        if (sub[j] == '\0')
            return 1;
    }
    return 0;
}
int main()
{
    char str[100], sub[100];
    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the substring: ");
    fgets(sub, sizeof(sub), stdin);
    if (substringExists(str, sub))
        printf("Substring exists in the string");
    else
        printf("Substring does not exist");
    return 0;
}
