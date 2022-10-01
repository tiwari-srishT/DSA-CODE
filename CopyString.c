#include <stdio.h>
#include <string.h>
int main()
{   
    char a[50],b[50],c[50];
    int len=0;
    
    printf("Enter the string\n");
    gets(a);
    
    printf("By using Code:");
    while(a[len]!='\0')
    {
       b[len]=a[len]; 
       len++;
    }
    b[len]='\0';
    puts(b);
    
    printf("By using predefined function:");
    strcpy(c,a);
    puts(c);  
}
    
