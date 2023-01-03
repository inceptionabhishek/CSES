/* O_o obviously Template is copied from somewhere o_O */
#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
//#pragma GCC optimize ("-O3")
#define ll long long int
#define ld long double
#define fi first
#define se second
 
/*-----------------------------------------------DEBUG FUNCTIONS----------------------------------------------------------------------------------------------------------------------------------------------------*/
#ifdef AbhishekKumar
#define debb(x) cerr << #x <<" "; debug(x); cerr << endl;
#else
#define debb(x);
#endif
void debug(ll t) {cerr << t;}
void debug(int t) {cerr << t;}
void debug(string t) {cerr << t;}
void debug(char t) {cerr << t;}
void debug(ld t) {cerr << t;}
void debug(double t) {cerr << t;}
void debug(unsigned ll t) {cerr << t;}
template <class Y, class V> void debug(pair <Y, V> p);
template <class Y> void debug(vector <Y> v);
template <class Y> void debug(set <Y> v);
template <class Y, class V> void debug(map <Y, V> v);
template <class Y> void debug(multiset <Y> v);
template <class Y, class V> void debug(pair <Y, V> p) {cerr << "{"; debug(p.ff); cerr << ","; debug(p.ss); cerr << "}";}
template <class Y> void debug(vector <Y> v) {cerr << "[ "; for (Y i : v) {debug(i); cerr << " ";} cerr << "]";}
template <class Y> void debug(set <Y> v) {cerr << "[ "; for (Y i : v) {debug(i); cerr << " ";} cerr << "]";}
template <class Y> void debug(multiset <Y> v) {cerr << "[ "; for (Y i : v) {debug(i); cerr << " ";} cerr << "]";}
template <class Y, class V> void debug(map <Y, V> v) {cerr << "[ "; for (auto i : v) {debug(i); cerr << " ";} cerr << "]";}
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define deb(x) cout << #x << "=" << x << endl
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
#define endl '\n'
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define sz(x) (ll)x.size()
#define pqh priority_queue
//#define ook order_of_key   //  returns position (unsigned integer) to given key
//#define fbo find_by_order  //  returns iterator to the element at given position
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,n) for(i=1;i<=n;i++)
#define rep(i,a,b) for(i=a;i<=b;i++)
#define per(i,b,a) for(i=b;i>=a;i--)
#define all(x) x.begin(), x.end()
#define zerobits(x) __builtin_ctzll(x)
#define setbits(x)  __builtin_popcountll(x)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define tol(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define tou(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define read(v) for(auto &it:v) cin>>it;
#define print(v) fo(i,v.size()) cout<<v[i]<<' ' ; cout<<endl;
typedef pair<ll, ll>  pl;   typedef vector<pl>  vpl;    typedef pair<int,int> pi;    typedef vector<pi>   vpi;
typedef pair<ll,pl>   plp;  typedef vector<plp> vplp;   typedef pair<pi,int>  ppi;   typedef vector<ppi>  vppi;
typedef pair<pl,pl>   ppp;  typedef vector<ppp> vppp;   typedef pair<pi,pi>   pppi;  typedef vector<pppi>  vpppi;
typedef vector<ll>    vl;   typedef vector<vl>  vvl;    typedef vector<int>   vi;    typedef vector<vi>  vvi;
//template <typename Y> using oset = tree<Y, null_type, less<Y>, rb_tree_tag, tree_order_statistics_node_update>;
//template <class Y> void debug(oset<Y> v) {cerr << "[ "; for (auto i : v) {debug(i); cerr << " ";} cerr << "]";}
template <typename Y> using pql = priority_queue<Y, vector<Y>, greater<Y>>;
template <typename Y>
void make_unique(Y &vec) {
    vec.erase(unique(vec.begin(),vec.end()), vec.end());
}
const ll mod = 1000000007;
const int mod2= 998244353;
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
ll isprime(ll n){ if(n<=1) return 0; if(n<=3) return 1; if(n%2==0||n%3==0) return 0; for(ll i=5;i*i<=n;i=i+6) if(n%i==0||n%(i+2)==0) return 0; return 1; } ll gcd(ll a,ll b){return __gcd(a,b); }
ll lsb(ll n){ n=n^(n&(n-1)); ll pos=0; while(n){n=n>>1; pos++; } return pos-1; }/* acc. to zero indexing*/ ll bpow(ll a,ll n){ll res=1; while(n>0){ if(n&1LL) res=res*a; a=a*a; n>>=1; } return res; }
ll msb(ll n){ll pos=0; while(n){n=n>>1; pos++; } return pos-1; }/* acc. to zero indexing*/ ll mpow(ll a, ll n,ll p){ a%=p; ll res=1; while(n>0){ if(n&1LL)res=res*a%p; a=a*a%p; n>>=1; } return res; }
ll add(ll a, ll b){ a+=b; if(a>=mod) a-=mod; return a; } ll sub(ll a,ll b){ a-=b; if(a<0) a+=mod; return a; }ll mul(ll a, ll b){ return (a * b) % mod; } ll modI(ll n,ll p){ return mpow(n, p - 2, p); }
ll lcm(ll a,ll b){return (a*b)/__gcd(a,b);} ll LCM(vl &v,ll n){ ll ans=v[0]; for(ll i=1;i<n;i++) ans=(((v[i]*ans))/(__gcd(v[i],ans))); return ans; }
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
const ld PI = 3.141592653589793;
const ll inf = 1e18;
const ll cons = 200005;
 
ll ans(ll n){
	return (n*n*(n*n-1)/2 -4*(n-1)*(n-2));
}
int solve(){
	ll n;
	cin >> n;
	for(ll i=1;i<=n;i++){
		cout << ans(i) << endl;
	}
 
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
 //   cin >> t;
    while(t--){
    	solve();
	}
    return 0;
}