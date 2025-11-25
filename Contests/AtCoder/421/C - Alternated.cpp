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
typedef vector<string> vs;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://atcoder.jp/contests/abc421/tasks/abc421_c

Problem Statement
You are given a string S of length 2N. S contains exactly N occurrences of A and N occurrences of B.

Find the minimum number of operations (possibly zero) needed to make S have no adjacent identical characters, 
where an operation consists of swapping two adjacent characters in S.

Constraints
1 ≤ N ≤ 5×10^5
N is an integer.
S is a string of length 2N consisting of N occurrences of A and N occurrences of B.

Input
The input is given from Standard Input in the following format:
N
S

Output
Print the answer.
*/

void solve(int n, string s) {
    vi posi;
    for (int i=0; i<(2*n); i++) if (s[i] == 'A') posi.push_back(i);

    ll c1 = 0, c2 = 0;
    for (int i=0; i<n; i++) c1 += abs(posi[i] - (2*i));
    for (int i=0; i<n; i++) c2 += abs(posi[i] - (2*i+1));
    cout << min(c1, c2) << "\n";
}

int main() {
    opIO
    int n;
    string s;
    cin >> n >> s;
    solve(n, s);
    return 0;
}