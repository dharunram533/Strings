#include <stdio.h>

int main()
{
    char name[100];
    int c = 0;

    printf("Enter string: ");
    fgets(name, sizeof(name), stdin);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if ((name[i] >= 'A' && name[i] <= 'Z') ||
            (name[i] >= 'a' && name[i] <= 'z') ||
            (name[i] >= '0' && name[i] <= '9'))
        {
            c++;
        }
    }

    printf("Count = %d", c);

    return 0;
}
