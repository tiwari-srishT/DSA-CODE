#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int


void solve(){
	int n; cin>>n;
	vector<long long> p_arr;
	vector<long long> n_arr;
	long long maximum = -1;
	for(int i = 0; i< n; i ++){
		long long z;
		cin>>z;
		if(z>=0 ){
			p_arr.push_back(z);
		}
		else{
			n_arr.push_back(z);
		}
		z = z*z;
		maximum = max(maximum, z);
	}
	sort(p_arr.begin(), p_arr.end());
	sort(n_arr.begin(), n_arr.end());

	if(n_arr.size() == 0){
		cout<<p_arr[0]*p_arr[0];
	}
	else if(p_arr.size() == 0){
		cout<<n_arr[n_arr.size()-1]*n_arr[n_arr.size()-1];
	}
	else{
		cout<<n_arr[0]*p_arr[p_arr.size()-1];
	}

	cout<<" "<<maximum<<endl;

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
