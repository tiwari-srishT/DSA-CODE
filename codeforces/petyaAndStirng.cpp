#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int


void solve(){
	string s1,s2; cin>>s1>>s2;

	// cout<<int(s1[3])-int(s2[3]);
	// pattern is 32 words
	bool ans = false;
	for(int i = 0; i< s1.size(); i++){
		if(s1[i] == s2[i] || abs(int(s1[i])-int(s2[i])) == 32){
			// cout<<i;
		}
		else if(int(s1[i])> int(s2[i])){
			cout<<1<<endl;
			ans = true;
			break;
		}
		else{
			cout<<-1<<endl;
			ans = true;
			break;
		}
	}
	if(ans == false){
		cout<<0<<endl;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	
	solve();
	
    
    return 0;
}
