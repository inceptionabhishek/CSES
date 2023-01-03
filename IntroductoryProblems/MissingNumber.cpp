#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long	
 ll getMissingNo(ll a[], ll n)
{
 
    ll total = (n + 1) * (n + 2) / 2;
    for (ll i = 0; i < n; i++)
        total -= a[i];
    return total;
}
int main(){
	ll n;
	cin>>n;
	ll a[n-1];
	for(ll i=0;i<n-1;i++){
		cin>>a[i];
	}
	cout << getMissingNo(a,n-1);
	
 
	return 0;
}