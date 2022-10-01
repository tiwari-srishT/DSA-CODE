#include <stdio.h>
#include <string.h>
 
int main()
{
    int i,j,temp,x=0;
  	char str1[100],new[100];
  	
 
  	printf("\n Enter main string\n");
  	gets(str1);
  	 	
  	for(i = 0; i < strlen(str1); i++)  //compare and then remove
  	{
  		for(j = i+1; str1[j] != '\0'; j++)
  		{
  			if(str1[j] == str1[i])  
			{
                break;
 			}
            
		}
        if(str1[j]=='\0') 
        {
            new[x++]=str1[i];
        }
	}
	new[x]='\0';
	printf("Without duplicate characters string is %s ", new);
	
  	return 0;
}
