#include <bits/stdc++.h>
using namespace std;
 
const long long SZ = 1e5 + 7;
const long long inf = 1e18;
const long long mod = 1e9 + 7;
const long long MOD = 998244353;
 
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
 
void __print(int x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << x;}
void __print(const char *x) {cerr << x;}
void __print(const string &x) {cerr << x;}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first); cerr << ", "; __print(x.second);
    cerr << '}';
}
 
template<typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
    {
        cerr << (f++ ? ", " : "");
        __print(i);
    }
    cerr << "}";
}
void _print()
{
    cerr << "]\n";
}
 
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
    {
        cerr << ", ";
    }
    _print(v...);
}
 
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define  dbg(x...)
#endif
 
#define pb                  push_back
#define mp                  make_pair
 
#define fi                  first
#define se                  second
 
#define endl                '\n'
#define sz(x)               (long long)x.size()
 
#define all(c)              (c).begin(), (c).end()
#define allr(c)             (c).rbegin(), (c).rend()
 
#define Max(a,b)            ((a > b) ? a : b)
#define Min(a,b)            ((a < b) ? a : b)
 
#define ci(X)               long long X; cin >> X
#define cii(X, Y)           long long X, Y; cin >> X >> Y
#define ciii(X, Y, Z)       long long X, Y, Z; cin >> X >> Y >> Z
 
long long                   tc_cnt = 1;
#define ons()               cout << "Case #" << tc_cnt ++ << ": ";
 
#define flash               ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
#define forn(i, l, r)       for(long long i = l; i < (r); i++)
#define forr(i, l, r)       for(long long i = l; i >= (r); i--)
 
#define mem0(X)             memset((X), 0, sizeof((X)))
#define mem1(X)             memset((X), -1, sizeof((X)))
#define setbits(x)          __builtin_popcountll(x)
 
ll powermod(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = (ans * a) % mod;
        b = b / 2;
        a = (a * a) % mod;
    }
    return ans;
}
 
ll gcd(ll a, ll b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
 
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
 
bool palin(string s)
{
    ll l = 0;
    ll r = sz(s) - 1;
    while(l < r)
    {
        if(s[l ++] != s[r --])
        {
            return false;
        }
    }
    return true;
}
int n;
void solve(){
    cin >> n;
    vector <ll> dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<=6;j++){
            if(j>i){
                break;
            }
            dp[i]= (dp[i]+dp[i-j])% mod;
        }
    }
    cout << dp[n] << endl;
 
}
 
int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("new.txt", "w", stdout);
#endif
    flash;
    int t=1; 
//  cin>>t;
    while(t--) {
      solve();
    }
}