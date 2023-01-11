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
#ifndef ONLINE_JUDGE
  #include "debug.h"
#else
#define deb(...)
#endif
 
void solve() {
	int n;
	cin >> n;
	vector <pair<int,int>> v;
	fo(i,n){
		int x,y;
		cin >> x >> y;
		v.pb({x,1});
		v.pb({y,-1});
	}
	sort(all(v));
	int cnt=0;
	int temp=0;
	for(auto j:v){
		temp += j.ss;
		cnt=max(cnt,temp);
	}
	cout << cnt << endl;
	
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