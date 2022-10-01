#include <stdio.h>
#include <string.h>

int main()
{
    char swap;
    char str1[100];
    char str2[100];

    printf("Enter First String\n");
    fflush(stdin);
    gets(str1);

    printf("Enter second string\n");
    fflush(stdin);
    gets(str2);

    int i, j, len1, len2;
    len1 = strlen(str1);
    len2 = strlen(str2);
    // ---------length not equal ---------

    if (len1 != len2)
    {
        printf("%s and %s is not an anagrams! \n", str1, str2);
        return 0;
    }

    //making both string sorted
    for (i = 0; i < len1 - 1; i++)
    {
        for (j = i + 1; j < len1; j++)
        {
            if (str1[i] > str1[j])
            {
                swap = str1[i];
                str1[i] = str1[j];
                str1[j] = swap;
            }
            if (str2[i] > str2[j])
            {
                swap = str2[i];
                str2[i] = str2[j];
                str2[j] = swap;
            }
        }
    }

    // Now both strings are sorted so comparing both strings character by character

    for (i = 0; i < len1; i++)
    {
        if (str1[i] != str2[i])
        {
            printf("Not anagram \n", str1, str2);
            return 0;
        }
    }

    printf(" Yes they are anagram \n");
    return 0;
}
