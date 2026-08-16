#include <stdio.h>
void compress(char str[])
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != str[i + 1])
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
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    compress(str);
    printf("Compressed string: %s", str);
    return 0;
}
