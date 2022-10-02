#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int


void solve(){
	int a; cin>>a;
	if(a<50){
		cout<<"LEFT"<<endl;
	}
	else{
		cout<<"RIGHT"<<endl;
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
