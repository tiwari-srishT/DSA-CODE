#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
 solve(){
	int a, x, b, y;
	cin>>a>>x>>b>>y;
	
	if(a/x > b/y){
		cout<<"Alice"<<endl;
	}
	
	else if(a/x < b/y){
		cout<<"Bob"<<endl;
	}
	else{
		cout<<"Equal"<<endl;
	}
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
