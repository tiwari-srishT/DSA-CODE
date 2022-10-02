#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int


int solve(int a, int b, int c){
	int count = 0;
	while((a != 0 && b!= 0) || (b != 0 && c!= 0) || (a != 0 && c!= 0)){
		if(a != 0 && b!= 0){
			count++;
			a--;
			b--;
		}
		if(b != 0 && c!= 0){
			count++;
			b--;
			c--;
		}
		if(a != 0 && c!= 0){
			count++;
			a--;
			c--;
		}
	}
	return count;

}

void solve(){
	int a, b, c;
	cin>>a>>b>>c;
	int store = 0;
	store = solve(a, b, c);
	if((a == 1 && b== 1) || (b == 1 && c== 1) || (a == 1 && c== 1) ){
		if(store>a+b+c){
			cout<<store<<endl;
		}
		else{
			cout<<a+b+c<<endl;
		}
	}
	else{
		cout<<store<<endl;
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
