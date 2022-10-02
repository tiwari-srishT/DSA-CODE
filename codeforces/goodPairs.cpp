#include<bits/stdc++.h>
#include <algorithm>

using namespace std;
#define mod 1000000007
#define ll long long int


void solve(){
	int n; cin>>n;
	vector<int> v(n, 0);
	for(int i = 0; i< n; i++){
		int p; cin>>p;
		v[i] = p;
	}
	int counter = 0;
	for(int i = 0; i<n; i++){
		for(int j = i+1; j<n; j++){
			// cout<<v[i]<<" "<<v[j]<<endl;
			if(__gcd(v[i], v[j]) == (v[i]*v[j])/__gcd(v[i], v[j])){
				counter++;
			}
		}
	}
	cout<<counter<<endl;
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
