#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ALL(v) v.begin(), v.end()
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define dbg(x) cout << (#x) << " is " << (x) << endl;
#define dbg2(x, y) cout << (#x) << " is " << (x) << " and " << (#y) << " is " << y << endl;
#define dbgarr(x, sz)                                             \
  for (int asdf = 0; asdf < (sz); asdf++) cout << x[asdf] << ' '; \
  cout << endl;
#define dbgarr2(x, rose, colin)                \
  for (int asdf2 = 0; asdf2 < rose; asdf2++) { \
    dbgarr(x[asdf2], colin);                   \
  }
#define dbgitem(x)                                                           \
  for (auto asdf = x.begin(); asdf != x.end(); asdf++) cout << *asdf << ' '; \
  cout << endl;
 
 
struct solution{
    void solve() {
        int n,m,k;
        cin >> n >> m >> k;
        ll a[n],b[m];
        FOR(i,0,n){
            cin >> a[i];
        }
        FOR(i,0,m){
            cin >> b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=0;
        ll ans=0;
        while(i<n && j<m){
            if(abs(a[i]-b[j])<=k){
                i++;
                j++;
                ans++;
            }
            else{
                if((a[i]-b[j])>k){
                    j++;
                }
                else{
                    i++;
                }
            }
        }
 
        cout << ans << endl;
 
 
 
 
    }
};
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(0),cin.tie(0),
    cout.tie(0);
    int t=1;
   // cin >> t;
    while(t--){
        solution test;
        test.solve();
    }
    return 0;
}