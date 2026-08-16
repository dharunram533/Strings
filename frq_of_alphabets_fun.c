#include <stdio.h>
void frequency(char str[])
{
    int count[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            count[str[i] - 'A']++;

        else if (str[i] >= 'a' && str[i] <= 'z')
            count[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
            printf("%c : %d\n", 'a' + i, count[i]);
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    frequency(str);
    return 0;
}
