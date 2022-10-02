#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
#define mod 1000000007
#define ll long long int

int gcd(int a, int b)
{
    return (b == 0 ? a : gcd(b, a % b));
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t; cin>>t; 
    while(t--){
    	int n; cin>>n;
        cout<<n+(n/2+n/3)*2<<endl;
    }
    return 0;
}
