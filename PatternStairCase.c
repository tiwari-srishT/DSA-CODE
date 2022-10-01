#include <stdio.h>

int main()


{
    
int a,i,j,k,row;
scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        
        for(j=0;j<row-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
             printf("#");
        }
        
          
            
        printf("\n");
    }
}
