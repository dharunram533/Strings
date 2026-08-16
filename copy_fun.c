#include <stdio.h>

void copy(char name[], char new[])
{
    int i = 0;

    while (name[i] != '\0')
    {
        new[i] = name[i];
        i++;
    }

    new[i] = '\0';
}

int main()
{
    char name[50];
    char new[50];

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    copy(name, new);

    printf("Copied string: %s", new);

    return 0;
}
