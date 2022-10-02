#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
#define mod 1000000007
#define ll long long int

int gcd(int a, int b)
{
    return (b == 0 ? a : gcd(b, a % b));
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t; cin>>t;
    while(t--){
    	int n; cin>>n;
    	vector<int> dp(n+1, 0);
        dp[1] = 1, dp[2] = 4, dp[3] = 7;
        if(n<=3){
            cout<<dp[n];
        }
        

        else{
            for(int i = 4; i<= n; i++){
                int count = 0;
                // cout<<"considering for"<<i<<endl;
                for(int j = 1; j<= i-1; j++){
                    
                    int target = (i*j)/__gcd(i, j)/gcd(i,j);
                    if(target<= 3){
                        // cout<<j<<" "<<i<<endl;
                        count++;
                    }

                }
                dp[i] = dp[i-1]+ count*2+1;
                // cout<<count*2+1<<endl;
            }
            cout<<dp[n];
        }

        
    	
    	
        
        

    }

    return 0;
}
