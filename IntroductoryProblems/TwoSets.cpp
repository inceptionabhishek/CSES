#include<bits/stdc++.h>
#define ll long long int
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
    ll count;
    ll index;
};
const ll mod = 1e9+7;
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a);
        a = (a * a);
        b >>= 1;
    }
    return (res);
}
vector <int> allprimes;
int MAXN=1e6;
void sieve(){
    bool prime[MAXN+1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= MAXN; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= MAXN; i += p){
                prime[i] = false;
            }
        }
    }
    for(int i=2;i<=MAXN;i++){
        if(prime[i]){
            allprimes.push_back(i);
        }
    }
}
void solve() {
    ll n;
    cin >> n;
    ll value =n*(n+1)/2;
    if(value %2==0){
        value =value/2;
        vector <ll> arr1,arr2;
        while(n!=0){
            if(value-n>=0){
                arr1.push_back(n);
                value -=n;
            }
            else{
                arr2.push_back(n);
            }
            n--;
        }
        debug(arr1);
        debug(arr2);
        cout << "YES" << endl;
        cout << arr1.size() << endl;
        for(auto jj:arr1){
            cout <<jj << " ";
        }
        cout << endl;
        cout << arr2.size() << endl;
        for(auto jj:arr2){
            cout << jj << " ";
        }
        cout << endl;
    }
    else{
        cout << "NO" << endl;
    }
 
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
  //  cin >> t;
    while(t--){
        solve();
    }
    return 0;
}