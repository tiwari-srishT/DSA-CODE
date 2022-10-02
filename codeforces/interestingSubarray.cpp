#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int


void solve(){
	int n; cin>>n; 
	int maxi = INT_MIN;
	int mini = INT_MAX;
	while(n--){
		int o; cin>>o;
		maxi = max(maxi, o);
		mini = min(mini, o);
	}
	cout<<mini*mini<<" "<<maxi*maxi<<endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	int t; cin>>t;
	while(t--){
		solve();
	}
    
    return 0;
}
