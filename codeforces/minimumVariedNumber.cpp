#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int

void solve(){
	int n; cin>>n;
	int temp = n;
	
	for(int i = 9; i>0; i--){
		if(temp>0){
			if(i< temp){
				temp-= i;
			}
			else{
				continue;
			}
		}
	}

}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// int t; cin>>t;
	// while(t--){
	solve();
	// }
    
    return 0;
}
