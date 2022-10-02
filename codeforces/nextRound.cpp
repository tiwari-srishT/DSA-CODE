#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int


void solve(){
	
	int n, k, a, b = 0, mas[10000];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        mas[i] = a;
    }
    for (int j = 1; j <= n; j++) {
        if (mas[j] >= mas[k] && mas[j] > 0) {
            b++;
        }
    }
    cout << b;
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
