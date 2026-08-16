#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int flag = 1;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            count1[str1[i] - 'A']++;
        else if (str1[i] >= 'a' && str1[i] <= 'z')
            count1[str1[i] - 'a']++;
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] >= 'A' && str2[i] <= 'Z')
            count2[str2[i] - 'A']++;
        else if (str2[i] >= 'a' && str2[i] <= 'z')
            count2[str2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Strings are Anagrams");
    else
        printf("Strings are Not Anagrams");
    return 0;
}
