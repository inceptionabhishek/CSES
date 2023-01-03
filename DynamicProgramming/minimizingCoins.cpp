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
const int MAXN=1e6 +1000;
ll dp[MAXN];
ll rec(ll coins[],ll n,ll x,int i){
	if(x==0){
		return 0;
	}
	if(i>=n || x<0){
		return INT_MAX;
	}
 
	if(dp[x]!=INT_MAX){
		return dp[x];
	}
	ll choice1=1+rec(coins,n,x-coins[i],i);
	ll choice2=rec(coins,n,x,i+1);
	return dp[x]=min({choice1,choice2});
}
 
void solve() {
  int n, target;
  cin >> n >> target;
  vector<int> c(n);
  for (int&v : c) cin >> v;
 
  vector<int> dp(target+1,1e9);
  dp[0] = 0;
  for (int i = 1; i <= target; i++) {
    for (int j = 0; j < n; j++) {
      if (i-c[j] >= 0) {
	dp[i] = min(dp[i], dp[i-c[j]]+1);
      }
    }
  }
  cout << (dp[target] == 1e9 ? -1 : dp[target]) << endl;
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
