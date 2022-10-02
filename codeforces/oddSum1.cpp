#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 100 ;
	int counter = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{

			if((i+j)%2 != 0){
                // cout<<i<<" "<<j<<endl;
                counter++;
            }
		}
	}
    cout<<counter;
}