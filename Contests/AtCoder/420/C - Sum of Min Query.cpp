#include <bits/stdc++.h>

#define SET(m, i) ((m) | (1 << (i)))
#define TEST(m, i) ((m) & (1 << (i)))
#define CLEAR(m, i) ((m) &~ (1 << (i)))
#define DEBUG(n) (cout << (n) << endl)
#define CLEAN(arr) (memset(arr, 0, sizeof(arr)))
#define ALL(v) (v).begin(), (v).end()
#define opIO ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://atcoder.jp/contests/abc420/tasks/abc420_c

Problem Statement
You are given length-N integer sequences: A=(A1,A2,…,AN) and B=(B1,B2,…,BN).

You are given Q queries to process in order. The i-th query (1≤i≤Q) is described as follows:
You are given a character ci and integers Xi, Vi. If ci=A, change Axi to Vi; if ci=B, change Bxi to Vi. 
Then, output k=1 to N ∑ min(Ak,Bk).

Constraints
1≤N,Q≤2×10^5
1≤Ai, Bi ≤10^9
ci is either A or B.
1≤Xi≤N
1≤Vi≤10^9
All input values are integers.

Input
The input is given from Standard Input in the following format:
N Q
A1 A2 … AN
B1 B2 … BN
​
c1 X1 V1
c2 X2 V2
⋮
cQ XQ VQ
 
Output
Output Q lines. The i-th line (1 ≤ i ≤ Q) should contain the answer to the i-th query.
*/

void solve(int n, ll a[], ll b[], ll& sumAct) {
    char c; int x; ll v;
    cin >> c >> x >> v; x--;
    sumAct -= min(a[x], b[x]);
    if (c == 'A') a[x] = v;
    else b[x] = v;
    sumAct += min(a[x], b[x]);
    cout << sumAct << "\n";
}

int main() {
    opIO
    int n, q;
    cin >> n >> q;
    ll a[n], b[n];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];

    ll sumAct = 0;
    for (int i=0; i<n; i++) sumAct += min(a[i], b[i]);
    while(q--) solve(n, a, b, sumAct);
    return 0;
}