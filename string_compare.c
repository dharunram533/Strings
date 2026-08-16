#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int flag = 1;
    printf("Enter first username: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second username: ");
    fgets(str2, sizeof(str2), stdin);
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag){
        printf("Strings are identical.");
    }
    else{
        printf("Strings are different.");
    }
    return 0;
}
