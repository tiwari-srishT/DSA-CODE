#include<iostream>
#include<string.h>

using namespace std;
int main()
{
   int counnt,i,x,y,n,t,r;
   char a[10][25];
   cout<<"Enter the number of names you want to enter"<<endl;
   cin>>n;
   cout<<"Enter the names"<<endl;
   for(i=0;i<n;i++)
   {
   cin.getline(a[i],25);
   if(a[i][0] < 65 || (a[i][0] > 90 && a[i][0] <97) || a[i][0] > 122)
			i--;
   }
   
   for(x=0;x<n;x++)
   {
       counnt=0;
       for(y=0;y<n;y++)
       {
        if(strlen(a[x])==strlen(a[y]))
        {
            r=0;
            for(t=0;t<strlen(a[x]);t++)
            {
                if(a[x][t]!=a[y][t])
                {
                    r=1;
                    break; 
                } 
            }
            if(r==0)
            {
                counnt++;
            } 
        } 

       }
        cout<<a[x]<<"   "<<counnt<<"  ";
   }
   return 0;
}
