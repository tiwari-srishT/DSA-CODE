#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int


void solve(){
	int a, b, c; cin>>a>>b>>c;
	

	int f = abs(a-1);
	int s = abs(b-c)+ (c-1);

	if(f==s){
		cout<<3<<endl;
	}
	else if(f<s){
		cout<<1<<endl;
	}
	else{
		cout<<2<<endl;
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
