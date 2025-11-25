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
typedef set<int> si;

/*
https://atcoder.jp/contests/abc425/tasks/abc425_b

Problem Statement
You are given an integer sequence A=(A1 ,A2),…,AN) of length N. 
Here, each element of A is either −1 or an integer between 
1 and N, inclusive.

Determine whether there exists an integer sequence 
P=(P1,P2,…,PN) of length N that satisfies all of the 
following conditions, and if it exists, find one.

P is a permutation of (1,2,…,N).
For i=1,2,…,N, if Ai!=-1, then Pi=Ai holds.
​
Constraints
1 ≤ N ≤ 10
Ai = −1 or 1 ≤ Ai ≤ N
All input values are integers.

Input
The input is given from Standard Input in the following format:
N
A1 A2 … AN
 
Output
If there is no P that satisfies all conditions, output No.
Otherwise, output P that satisfies all conditions in the following format:
Yes
P1 P2 … PN

If there are multiple 
P that satisfy all conditions, any of them may be output.
*/

void solve(vi &a, si &s, int n) {
    forr(i, 0, n) {
        cin >> a[i];
        if (a[i] != -1) {
            if (s.count(a[i])) s.erase(a[i]); 
            else { cout << "No" << "\n"; return; }
        }
    }
    auto t = s.begin();
    forr(i, 0, n) if (a[i] == -1) { a[i] = *t; t++; }

    cout << "Yes" << "\n";
    forr(i, 0, n) cout << a[i] << (i == n-1 ? '\n' : ' ');
}

int main() {
    opIO;
    int n;
    cin >> n;
    vi a(n); si s;
    forr(i, 1, n+1) s.insert(i);
    solve(a, s, n);
    return 0;
}