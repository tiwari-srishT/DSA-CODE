#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int


void solve(){
	string s; cin>> s;
	if(s.size()>10){
		cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
	}
	else{
		cout<<s<<endl;;
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
