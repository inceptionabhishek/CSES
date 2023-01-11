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

void toh(int n,int from,int to,int aux){
	if(n==0){
		return;
	}
	toh(n-1,from,aux,to);
	cout << from << " " << to << endl;
	toh(n-1,aux,to,from);
}
void solve() {
	int n;
	cin >> n;
	cout << pow(2,n)-1  << endl;
	toh(n,1,3,2);
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
