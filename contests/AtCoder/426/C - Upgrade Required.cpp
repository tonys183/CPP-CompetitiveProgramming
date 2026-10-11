#include <bits/stdc++.h>

#define POWEROFTWO(n) ((n) > 0 && !((n) & ((n) - 1)))
#define SET(m, i) ((m) | (1 << (i)))
#define TEST(m, i) ((m) & (1 << (i)))
#define CLEAR(m, i) ((m) &~ (1 << (i)))
#define DEBUG(n) (cout << (n) << endl)
#define CLEAN(arr) (memset(arr, 0, sizeof(arr)))
#define ALL(v) (v).begin(), (v).end()
#define forr(i, a, b) for(auto i = (a); i < (b); i++)
#define opIO ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;
typedef map<int, ll> mill;
typedef set<int> si;

/*
https://atcoder.jp/contests/abc426/tasks/abc426_c

Problem Statement
There are N versions of a certain OS, numbered 1,2,…,N in chronological order.
There are N PCs, and initially the OS version of the i-th PC is i.

Perform Q operations in order. The i-th operation is as follows:
Upgrade all PCs whose current OS version is Xi or earlier to 
version Yi (>Xi). Then, print the number of PCs upgraded in this operation.

Note that for i < Q, the upgrades from the i-th operation are performed 
before proceeding to the (i+1)-th operation.

Constraints
2 ≤ N ≤ 10^6
1 ≤ Q ≤ 2 × 10^5
1 ≤ Xi < Yi ≤ N
All input values are integers.

Input
The input is given from Standard Input in the following format:
N Q
X1 Y1
X2 Y2
⋮
XQ YQ
 
Output
Output Q lines. The i-th line should contain the number of 
PCs upgraded in the i-th operation.
*/

void solve(int n, int q, mill& c, si& av) {
    for (int i=0; i<q; i++) {
        vi tmp; ll res = 0;
        int x, y; cin >> x >> y;
        
        auto k = av.upper_bound(x);
        for (auto i=av.begin(); i!=k; i++) {
            res += c[*i]; c[y] += c[*i]; c.erase(*i);
            tmp.push_back(*i);
        }

        for (int v : tmp) av.erase(v);
        if (res > 0) { av.insert(y); }
        cout << res << "\n";
    }   
}

int main(){
    opIO
    int n, q;
    cin >> n >> q;
    mill c; si av;
    for (int i=1; i<=n; i++) { c[i]=1; av.insert(i); }
    solve(n, q, c, av);
    return 0;
}