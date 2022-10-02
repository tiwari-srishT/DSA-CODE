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
    	int fine; cin>>fine;
    	int pass_with_ticket; cin>>pass_with_ticket;
    	int without_ticket; cin>>without_ticket;

    	// cout<<fine<<pass_with_ticket<<without_ticket;

    	cout<<(pass_with_ticket-without_ticket)*fine<<endl;
    }
    return 0;
}
