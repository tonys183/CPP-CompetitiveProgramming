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
typedef vector<ll> vll;
typedef unordered_map<int, int> unii;

/*
https://atcoder.jp/contests/abc425/tasks/abc425_c

Problem Statement
You are given an integer sequence A=(A1,A2,…,AN) of length N.

Process Q queries in order. There are two types of queries, 
given in the following formats:

1 c: Perform the operation of moving the first element of A to the end c times.
2 l r: Output the value of i=l to r ∑ Ai.

Constraints
1 ≤ N ≤ 2×10^5
1 ≤ Q ≤ 2×10^5
1 ≤ Ai ≤ 10^9
1 ≤ c ≤ N
1 ≤ l ≤ r ≤ N
At least one query of the second type exists.
All input values are integers.

Input
The input is given from Standard Input in the following format:
N Q
A1 A2 … AN
query1
query2
⋮
queryQ
​
 
Each query queryi is given in one of the following two formats:
1 c
2 l r

Output
Following the instructions in the problem statement, output the 
answers to the second type queries, separated by newlines.
*/

void solve(vll &psum, int n, int q) {
    int s = 0;
    while(q--) {
        int x; cin >> x;
        if(x == 1) {
            int c; cin >> c;
            s = (s+c) % n;
        } else {
            int a, b; cin >> a >> b;
            int l = (s+a-1) % n;
            int r = (s+b-1) % n;

            ll res = (l <= r) ? psum[r+1]-psum[l] : (psum[n]-psum[l]+psum[r+1]);
            cout << res << "\n";
        }
    }
}

int main() {
    opIO;
    int n, q;
    cin >> n >> q;
    vll a(n), psum(n+1, 0);
    forr(i, 0, n) { cin >> a[i]; psum[i+1] = psum[i]+a[i]; }
    solve(psum, n, q);
    return 0;
}