#include <iostream>
using namespace std;
int abc(int a,int b)
{
    if(a<b)
    {
    if(a%2==0)
    {
        return 0+abc(a+1,b);   
    }
    return a+abc(a+2,b);
    }
    
}    
int main()
{ 
    int T,num1,num2;
    cin>>num1>>num2;
    T=abc(num1,num2);
    cout<<T;
    return 0;
}
