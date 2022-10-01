
#include <stdio.h>
#include <string.h>

int main()
{   
    char a[50],ch,*p=a;
    int len=0,flag=0,i;
    
    printf("Enter the string\n");
    gets(a);
    
    printf("Enter the character u want to search\n");
    scanf("%c",&ch);
    
    while(a[len]!='\0')
    {
        len++;
    }
    //printf("%d",len);
    
    //finding first occurence
    
    for(i=len-1;i>=0;i--)
    {
        if(a[i]==ch)
        {
            flag++;
            break;
        }
    }
    p+=i;
    if (flag==0)
    {
        printf("Character not found");
    }
    else
    {
        printf("Rear end with %c is %s",ch,p);
    }

    printf("\nBy using Pre Defined Function:\n");
    char *index=strrchr(a,ch);
    printf( "The rear occurrence of %c in '%s' is '%s'\n",ch,a,index );
}

