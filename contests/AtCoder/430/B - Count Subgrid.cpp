#include <bits/stdc++.h>

#define POWEROFTWO(n) ((n) > 0 && !((n) & ((n) - 1)))
#define SET(m, i) ((m) | (1 << (i)))
#define TEST(m, i) ((m) & (1 << (i)))
#define CLEAR(m, i) ((m) &~ (1 << (i)))
#define DEBUG(n) (cout << (n) << "\n");
#define CLEAN(arr) (memset(arr, 0, sizeof(arr)))
#define ALL(v) (v).begin(), (v).end()
#define forr(i, a, b) for(auto i = (a); i < (b); i++)
#define YESNO(x) cout << ((x) ? "YES" : "NO") << "\n";
#define YesNo(x) cout << ((x) ? "Yes" : "No") << "\n";
#define opIO ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;
typedef set<string> ss;

/*
https://atcoder.jp/contests/abc430/tasks/abc430_b

Problem Statement
There is a grid with N rows and N columns. The cell at the i-th row from the top 
and j-th column from the left is painted black if Si,j is #, and white if it is .

How many distinct patterns of painted cells can be obtained by 
extracting a region of M rows and M columns from this grid?

Constraints
1 ≤ M ≤ N ≤ 10
N and M are integers.
Si,j is . or #.

Input
The input is given from Standard Input in the following format:
N M
S1,1 … S1,N
⋮
SN,1 … SN,N
 
Output
Print the answer.
*/

int n, m;

void solve(vs& s){
    ss res;
    forr(i, 0, n-m+1) {
        forr(j, 0, n-m+1) {
            string p;
            forr(x, i, i+m) p += s[x].substr(j, m);
            res.insert(p);
        }
    }
    cout << res.size() << "\n";
}

int main(){
    opIO
    cin >> n >> m;
    vs s(n);
    forr(i, 0, n) cin >> s[i];
    solve(s);
    return 0;
}