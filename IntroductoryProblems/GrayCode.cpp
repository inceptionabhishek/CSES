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
	int n;
	cin >> n;
	for(int i=0;i< (1<<n);i++){
		int val=(i^(i>>1));
		bitset <32> r(val);
		cout << r << endl;
		string s=r.to_string();
		cout << s.substr(32-n) << endl;
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
