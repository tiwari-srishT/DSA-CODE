#include <stdio.h>
# include <string.h>

int my_strcspn(char str1[],char str2[])
{
    int i,j;
    for(i=0;i<strlen(str2);i++)
    {   for(j=0;j<strlen(str1);j++)   
        {   if(str1[j]==str2[i])        
            {
                break;
            }

        }
    }

    return j;
}
int main()
{
    printf("%d",my_strcspn("AHello","d"));
    printf("\n%d",strcspn("AHello","l"));
    
}
