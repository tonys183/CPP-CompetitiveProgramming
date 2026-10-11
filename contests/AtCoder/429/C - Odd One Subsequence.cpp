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
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://atcoder.jp/contests/abc429/tasks/abc429_c

Problem Statement
You are given an integer sequence of length N, A=(A1,A2,…,AN).

Find the number of triples of integers (i,j,k) satisfying 
1 ≤ i < j < k ≤ N that satisfy the following condition:
Exactly two distinct values are contained in 
Ai,Aj,Ak. That is, two of Ai,Aj,Ak are equal, and the remaining one is different.

Constraints
3 ≤ N ≤ 2×10^5
1 ≤ Ai ≤N
All input values are integers.

Input
The input is given from Standard Input in the following format:
N
A1 A2 … AN
​
Output
Print the number of triples of integers that satisfy the condition.
*/

ll n, res = 0;
map<ll, ll> f;

void solve(){
    // res = fq! / 2!(fq-2)!
    // res = fq*(fq-1) / 2!
    // n-fq
    for (auto const& [v, fq] : f) if (fq >= 2) res += (fq*(fq-1) / 2) * (n-fq);
    cout << res << "\n";
}

int main(){
    opIO;
    cin >> n;
    forr(i, 0, n) { int a; cin >> a; f[a]++; }
    solve();
    return 0;
}