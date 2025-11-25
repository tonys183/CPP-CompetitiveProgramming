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
typedef vector<ll> vll;
typedef unordered_map<int, int> unii;

/*
https://codeforces.com/contest/2171/problem/B

Yuu is trying out the student council! Unfortunately, she is being forced 
to do clerical work... Touko wants her to fill out the blanks in 
various student council documents.

You are given a partially filled array of nonnegative integers a1,a2,…,an,
where blank elements are denoted with −1.
You would like to fill in the blank elements with nonnegative integers, 
such that the absolute value of the sum of the elements in its difference array is minimized.

More formally, let b be the array of length n−1 such that bi = ai+1 − ai
for all 1 ≤ i ≤ n−1. Find the minimum possible value of |b1 + b2 + ⋯ + bn−1|,
across all possible ways to fill in the blank elements of a.

Additionally, output the array that achieves this minimum. If there are 
multiple such arrays, output the one that is lexicographically smallest∗.

∗
For two arbitrary arrays c and d of length n, we say that c is lexicographically 
smaller than d if there exists an index i (1 ≤ i ≤ n) such that cj=dj
for all j < i , and ci < di. In other words, c and d differ in at least one index, 
and at the first index at which they differ, ci is smaller than di.

Input
The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

The first line of each test case contains a single integer n (2 ≤ n ≤ 2⋅10^5).

The second line of each test case contains n integers, a1,a2,…,an (−1 ≤ ai ≤ 10^6).

It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^5.

Output
For each test case, on the first line, output the minimum possible value of 
|b1 + b2 + ⋯ + bn−1|. Then, on the second line, output n integers, 
the values of a1,a2,…,an in the lexicographically smallest array achieving this minimum.
*/

int t, n;

void solve(vi &a) {
    ll res;
    if (a[0] != -1 && a[n-1] != -1) res = llabs(a[n-1] - a[0]);
    else res = 0;

    forr(i, 1, n-1) if (a[i] == -1) a[i] = 0;
    if (a[0] == -1 && a[n-1] == -1) a[0] = a[n-1] = 0;
    else if (a[0] == -1) a[0] = a[n-1];
    else if (a[n-1] == -1) a[n-1] = a[0];
    
    cout << res << "\n";
    forr(i, 0, n) cout << a[i] << (i+1 < n ? ' ' : '\n');
}

int main(){
    opIO
    cin >> t;
    while(t--) {
        cin >> n;
        vi a(n);
        forr(i, 0, n) cin >> a[i];
        solve(a);
    }
    return 0;
}