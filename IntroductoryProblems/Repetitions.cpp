#include<bits/stdc++.h>
#define ll long long
#include <iomanip>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x)
{cerr << '\'' << x << '\'';}
void __print(const char *x)
{cerr << '\"' << x << '\"';}
void __print(const string &x)
{cerr << '\"' << x << '\"';}
void __print(bool x)
{cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x)
{cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x)
{int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
 
struct tri{
    ll value;
    int odds;
    int evens;
};
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
 
const int mod = 1000000007;
const int N = 1e5 + 10;
int x[N];
ll distinct[N];
void print(int a[], int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
bool isPowerOfTwo (ll x)
{
    return x && (!(x&(x-1)));
}
void solve() {
    string s;
    cin >> s;
    vector <pair <char,int>> v;
    int n=s.length();
    for(int i=0;i<n;i++){
        v.push_back(make_pair(s[i],1));
    }
    for(int i=1;i<n;i++){
        if(v[i].first==v[i-1].first){
           v[i].second= v[i-1].second+1;
        }
        else{
            v[i].second=1;
        }
    }
    int maxy=-1;
    for(int i=0;i<n;i++){
        maxy=max(maxy,v[i].second);
    }
    cout << maxy << endl;
 
    debug(v);
 
 
 
 
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
 
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t=1;
  // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
 
 