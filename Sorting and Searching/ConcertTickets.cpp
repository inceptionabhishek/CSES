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


void solve() {
	ll n,m;
	cin >> n >> m;
	multiset<int> tickets;
	for (int i=0;i<n;++i){
		int h;
		cin >> h; 
		tickets.insert(h);
	}
	deb(tickets);
	for (int i=0;i<m;++i){
		int t;
		cin >> t;
		auto it = tickets.upper_bound(t);
		deb(*it);
		if (it==tickets.begin()){
			cout << -1 << "\n";
		}
		else{
			cout << *(--it) << "\n";
			tickets.erase(it);
		}
	}
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
