#include<bits/stdc++.h>
using namespace std;
#ifdef DEBUG
#define dbg(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...)
#endif
#define mod 1000000007
#define ll long long int

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t; cin>>t;
    while(t--){
    	ll n ; cin >> n;
       vector<ll>v(n);
       for(int i = 0; i < n; i++){
          cin >> v[i];
       }
       multimap<ll, ll>m;
       for(int i = 0; i < n; i++){
          m.insert({v[i], i+1});
       }
       dbg(m);
       // print index of max element in map
       cout << m.rbegin()->second << endl;
    	

    	
    	
    }
    return 0;
}
