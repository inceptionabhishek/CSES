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
        ll a,b;
        cin >> a >> b;
        if(a==b && a%3==0){
            cout << "YES" << endl;
            return;
        }
        if(a==b && a%3!=0){
            cout << "NO" << endl;
            return;
        }
 
        if(a==2*b || b==2*a){
            cout << "YES" << endl;
            return;
        }
        else{
            if((a+b)%3==0 && min(a,b)*2>=max(a,b)){
                cout << "YES" << endl;
                return;
            }
            else{
                cout << "NO" << endl;
            }
        }
 
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
    cin >> t;
    while(t--){
        solution test;
        test.solve();
    }
    return 0;
}