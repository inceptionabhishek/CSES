#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod=1000000007;
const double PI = 3.14159265358979323846;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define fo(i ,n) for(ll i = 0 ; i < n ; i++)
#define mp make_pair
#define all(x) x.begin() , x.end()
#define ff first
#define ss second
#define pb push_back
#define vi vector<ll>
#ifndef ONLINE_JUDGE
  #include "debug.h"
#else
#define deb(...)
#endif
#define SIZE 100000 + 1



ll ans(ll n,ll i,ll a[],ll cur, ll tot){
	if(i>=n){
		return abs(tot-cur);
	}
	ll take=ans(n,i+1,a,cur+a[i],tot-a[i]);
	ll nottake=ans(n,i+1,a,cur,tot);
	return min(take,nottake);
}
void solve() {
	ll n;
	cin >> n;
	ll a[n];
	ll tot=0;
	fo(i,n){
		cin >> a[i];
		tot+=a[i];
	}
	cout << ans(n,0,a,0,tot) << endl;
}

 
int32_t main(){
  	FAST;
  	int t=1;
	//cin >> t;
 	while(t--){
 		solve();
 	}
  	return 0;
}
