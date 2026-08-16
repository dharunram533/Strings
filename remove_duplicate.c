#include <stdio.h>

void remove_duplicates(char str[])
{
    int i, j, k;
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                for (k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
                j--;
            }
        }
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    remove_duplicates(str);
    printf("After removing duplicates: %s", str);
    return 0;
}
