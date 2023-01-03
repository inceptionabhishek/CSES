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
	ll n;
	cin >> n;
	if(n==1){
		cout << 1 << endl;
		return;
	}
	if(n==2 || n==3){
		cout << "NO SOLUTION" << endl;
		return;
	}
	vector<int>v={2,4,1,3};
	if(n==4){
		fo(i,v.size()){
			cout << v[i] << ' ';
		}
		cout << endl;
		return;
	}
	vector<ll>vo,ve;
	for(int i=5;i<=n;i++){
		if(i%2==0){
			ve.pb(i);
		}else{
			vo.pb(i);
		}
	}
	reverse(all(ve));
	fo(i,ve.size()){
		cout << ve[i] << ' ';
	}
	fo(i,v.size()){
		cout << v[i] << ' ';
	}
	fo(i,vo.size()){
		cout << vo[i] << ' ';
	}
	cout << endl;
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
