#include <stdio.h>

int main()
{
    char str[500], oldch, newch;
    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter character to replace: ");
    scanf("%c", &oldch);
    printf("Enter new character: ");
    scanf("%c", &newch);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == oldch)
        {
            str[i] = newch;
        }
    }

    printf("Modified string: %s", str);

    return 0;
}
