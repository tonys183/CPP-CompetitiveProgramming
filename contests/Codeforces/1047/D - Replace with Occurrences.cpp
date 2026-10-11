#include <bits/stdc++.h>

#define POWEROFTWO(n) ((n) > 0 && !((n) & ((n) - 1)))
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
typedef unordered_map<int, vi> univ;

/*
https://codeforces.com/contest/2137/problem/D

Given an array a, let f(x) be the number of occurrences of x
in the array a. For example, when a = [1,2,3,1,4], then f(1)=2 and f(3)=1.

You have an array b of size n . Please determine if there is an array a
of size n such that f(ai)=bi for all 1 ≤ i ≤ n . If there is one, construct it.

Input
Each test contains multiple test cases. The first line contains the number of 
test cases t (1 ≤ t ≤ 10^4). The description of the test cases follows.

The first line of each test case contains an integer n (1 ≤ n ≤ 2⋅10^5).

The second line contains n integers b1,b2,…,bn (1 ≤ bi ≤ n).

It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^5.

Output
For each test case, output −1 if there is no valid array a.
Otherwise, print the array a of n integers on a new line. The elements should satisfy 1 ≤ ai ≤ n.
*/

void solve(vi &b, univ &freq, int n) {
    vi a(n, -1);
    int act = 1; int ok = 1;
    for (auto &[frq, ind] : freq) {
        if (ind.size() % frq != 0) {
            ok = 0; break;
        }
        for (int i=0; i<ind.size(); i+=frq) {
            for (int j=0; j<frq; j++) a[ind[i + j]] = act;
            act++;
        }
    }

    if (!ok) cout << "-1" << "\n";
    else { for (int i=0; i<n; i++) cout << a[i] << (i+1 == n ? '\n' : ' '); }
}

int main() {
    opIO
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi b(n);
        univ freq;
        for (int i=0; i<n; i++) {
            cin >> b[i]; freq[b[i]].push_back(i);
        }
        solve(b, freq, n);
    }
    return 0;
}