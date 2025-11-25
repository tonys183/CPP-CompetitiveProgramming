#include <bits/stdc++.h>

#define POWEROFTWO(n) ((n) > 0 && !((n) & ((n) - 1)))
#define SET(m, i) ((m) | (1 << (i)))
#define TEST(m, i) ((m) & (1 << (i)))
#define CLEAR(m, i) ((m) &~ (1 << (i)))
#define DEBUG(n) (cout << (n) << "\n");
#define CLEAN(arr) (memset(arr, 0, sizeof(arr)))
#define ALL(v) (v).begin(), (v).end()
#define forr(i, a, b) for(auto i = (a); i < (b); i++)
#define YN(x) cout << ((x) ? "YES" : "NO") << "\n";
#define opIO ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://codeforces.com/contest/2162/problem/B

You are given a binary∗ string s of length n.

Your task is to find any subsequence p of s such that:
The subsequence p is non-decreasing. That is, each 
character in p is not greater than the next one.

Let x denote the string obtained by removing all characters of p
from s, while preserving the order of the remaining characters. 
Then x must be a palindrome.

You only need to output any valid subsequence p that satisfies both 
conditions. If no such subsequence exists, output −1.

Note that an empty string is both non-decreasing and a palindrome.

∗
A binary string is a string consisting of characters '0' and '1'.

†
A subsequence of a string s=s1,s2,…,sn is a sequence p=si1,si2,…,sik
such that 1 ≤ i1 < i2 < … < ik ≤ n. The characters are selected in order,
but not necessarily contiguously. Note that an empty string is a subsequence of any string.

‡
A string t=t1t2…tm is a palindrome if ti=tm−i+1 for all 1≤i≤m.
In other words, the string reads the same forward and backward.

Input
The first line contains a single integer t (1 ≤ t ≤ 3000) — the number of test cases.

The first line of each test case contains a single integer 
n (1 ≤ n ≤ 10) — the length of the string.

The second line contains a binary string s of length n.

Output
If a solution exists:
On the first line, print a single integer k (0 ≤ k ≤ n) — the length of the subsequence p.
On the second line, print k distinct integers i1,i2,…,ik (1 ≤ i1 < i2 < ⋯< ik ≤n),
the indices of the characters in s that form p (in order as they appear in s).
Otherwise, print a single line containing −1.
*/

int t, n;
string s;

void solve(){
    cin >> n >> s;
    forr(msk, 0, (1 << n)) {
        string p,x;
        vi pp;
        forr (i, 0, n) {
            if (TEST(msk, i)) { p += s[i];  pp.push_back(i+1); } 
            else x += s[i];
        }

        string xr = x;
        reverse(ALL(xr));
        if (is_sorted(ALL(p)) && x == xr) {
            cout << pp.size() << "\n";
            forr (i, 0, pp.size()) cout << pp[i] << (i == pp.size()-1 ? "" : " ");
            cout << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}

int main(){
    opIO
    cin >> t;
    while(t--) solve();
    return 0;
}