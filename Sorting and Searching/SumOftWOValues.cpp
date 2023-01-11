#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const ll mod=1000000007;
#define INF INT_MAX
 
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fo(i ,n) for(ll i = 0 ; i < n ; i++)
#define mp make_pair
#define all(x) x.begin() , x.end()
#define ff first
#define ss second
#define sz(a) ((long long)(a).size())
#define pb push_back
 
long long bipow(long long a, long long b, long long m) {a %= m;long long res = 1;while (b > 0) {if (b & 1)res = res * a % m;a = a * a % m;b >>= 1;}return res;}
//-------------------------------------------------------------------------
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif
 
 
 
 
void solve(){
    ll n,x;
    cin >> n >> x;
    vector <ll> a(n);
    multiset <ll> ss;
    fo(i,n){
        cin >> a[i];
        ss.insert(a[i]);
    }
    
    fo(i,n){
        if(x>=a[i]){
            ll ano=x-a[i];
            if(ss.count(ano)){
                vector <ll> :: iterator it;
                it=find(all(a),ano);
                if(it-a.begin() != i){
                    cout << i+1 << " " << it-a.begin()+1 << endl;
                return;
                }
                
            }
        }
    }
    
    cout << "IMPOSSIBLE" << endl;
    
    
    
    
}
        
int main(){
    FAST;
    int tt=1;
   // cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}