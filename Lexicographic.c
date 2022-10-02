#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, r, c;
    char str[5][60];
//-----------taking words from user----------
    printf("Enter 5 words\n");
    for (r = 0; r < 5; r++) 
    {
        scanf("%s", str[r]);
    }
    printf("\n");
    char temp[50];  //for swapping in correct order it is used
    // below is code for sorting elements in order
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j <= 4; j++)
        {
            if (strcmp(str[i], str[j]) > 0)  //If ascii value of str 1 is greater than swap
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    //   for (i = 0; i < words; i++)
    // {
    //     for (j = i + 1; j <words; j++)
    //     {
    //         if (strcmp(str[i], str[j]) > 0)  
    //         {
    //             strcpy(temp, str[i]);
    //             strcpy(str[i], str[j]);
    //             strcpy(str[j], temp);
    //         }
    //     }
    // }
       //printing sorted elements
    printf("In lexicographical order: \n");
    for (i = 0; i < 5; ++i)
    {
        printf(str[i]);
        printf("\n");
    }
}
