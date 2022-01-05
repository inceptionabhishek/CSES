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
#define rep(i, n) FOR(i, 0, n)
#define repn(i, n) FORN(i, 1, n)
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
 
int neighborX[4] = {0, 0, 1, -1};
int neighborY[4] = {1, -1, 0, 0};
 
int n, m, answer = 0;
int vis[1010][1010];
char grid[1010][1010];
 
bool isValid (int y, int x) {
    if (y < 0) return false;
    if (x < 0) return false;
    if (y >= n) return false;
    if (x >= m) return false;
    if (grid[y][x] == '#') return false;
    return true;
}
 
void DFS (int y, int x) {
    vis[y][x] = 1;
    for (int i = 0 ; i < 4 ; i++) {
        int newX = x + neighborX[i];
        int newY = y + neighborY[i];
        if (isValid(newY, newX)) {
            if (!vis[newY][newX]) {
                DFS(newY, newX);
            }
        }
    }
}
struct solution{
    void solve() {
        cin >> n >> m;
        for (int i = 0 ; i < n ; i++) {
            for (int j = 0 ; j < m ; j++) {
                cin >> grid[i][j];
                vis[i][j] = 0;
            }
        }
        for (int i = 0 ; i < n ; i++) {
            for (int j = 0 ; j < m ; j++) {
                if (grid[i][j] == '.' && !vis[i][j]) {
                    DFS(i, j);
                    answer++;
                }
            }
        }
        cout << answer << endl;
        return;
    }
};
 
int main() {
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