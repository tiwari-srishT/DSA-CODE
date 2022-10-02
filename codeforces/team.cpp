#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int


void solve(){
	int n; cin>>n;
	int ans = 0;
	while(n--){
		int a, b, c; cin>>a>>b>>c;
		if(a+b+c>= 2){
			ans++;
		}
	}
	cout<<ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// int t; cin>>t;
	
	solve();
	
    
    return 0;
}
