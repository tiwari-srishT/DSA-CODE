#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n; cin>> n;
    while(n--){
    	int rtp; cin>> rtp;
    	int audit; cin>>audit;
    	int nrtp; cin>>nrtp;

    	cout<<rtp*4+2*audit<<endl;

    }

    return 0;
}
