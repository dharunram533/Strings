#include <stdio.h>

int main()
{
    char source[100], dest[100];
    int i;
    printf("Enter employee name: ");
    fgets(source, sizeof(source), stdin);
    for (i = 0; source[i] != '\0'; i++)
    {
        dest[i] = source[i];
    }
    printf("Copied String: %s", dest);
    return 0;
}
