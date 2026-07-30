#include <stdio.h>

int main()
{
    char str[100], result[100];
    int j = 0;
    printf("Enter serial number: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';
    printf("Without spaces: %s", result);
    return 0;
}
