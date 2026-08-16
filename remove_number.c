#include <stdio.h>

int main()
{
    char str[100], result[100];
    int j = 0;
    printf("Enter a mixed string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';
    printf("String after removing digits: %s", result);
    return 0;
}
