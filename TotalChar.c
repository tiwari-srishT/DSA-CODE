#include <stdio.h>
#include <string.h>
int main()
{

    int noc=0,sp=0,tab=0,lines=0,sym=0,cap=0,small=0,dig=0;
    char str[100];
    printf("Enter the lines\nPress $ to terminate string\n");
   // scanf("%[^$]", str);
    scanf("%s", str);

    for(int i=0;i<strlen(str);i++)
    {
        noc++;
        if(str[i]== '\\'  && str[i+1]=='n')
        {
            lines++;
            sp++;
            
        }
        else if(str[i]==' ')
        sp++;
        
        else if(str[i]=='\t')
        {
            tab++;
            sp++;
        }
        else if(str[i]>=65 && str[i]<=90)
        cap++;
        else if(str[i]>=97 && str[i]<=122)
        small++;
        else if(str[i]>=48 && str[i]<=57)
        dig++;
        else
        sym++;
        
    }
    printf("Total No of characters are %d\n",noc);
     printf("Total No of small alphabets are %d\n",small);
     printf("Total No of capital alphabets are %d\n",cap);
     printf("Total No of digits are %d\n",dig);
    printf("Total No of tabs are %d\n",tab);
    printf("Total No of words are %d\n",sp+1);
    printf("Total No of lines are %d\n",lines+1);
}
