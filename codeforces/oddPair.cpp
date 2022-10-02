#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t; cin>>t;
    while(t--){
    	long long int n; cin>>n;
    	// cout<<n*n/2<<endl;
    	
    	
    	// 1 - 0
    	// 2 - 21, 12 +0 -> 2
    	// 3 -> 23, 32 + 2 -> 4
    	// 4 -> (41, 43,)+ 4

    	

    	vector<int> dp(n,0);
    	dp[1] = 0;
    	for(int i = 2; i<=n; i++){
    		int counter = 0;
    		for(int j = 1; j<=i; j++){
    			// cout<<i<<'-'<<j<<endl;
    			if((i+j)%2!=0){
    				// cout<<
    				counter++;
    			}

    		}
    		// cout<<counter<<endl;
    		dp[i] = dp[i-1]+ 2*counter;
    	} 

    	for(auto x: dp){
    		cout<<x<<" " ;
    	}





    }
    return 0;
}
