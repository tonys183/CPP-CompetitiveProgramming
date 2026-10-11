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
typedef vector<ll> vll;
typedef unordered_map<int, int> unii;

/*
https://atcoder.jp/contests/abc427/tasks/abc427_b

Problem Statement
For a positive integer x, define f(x) as the sum of the digits in 
the decimal representation of x. For example, f(123)=1+2+3=6.

Define an infinite sequence A=(A0,A1,A2,…) by the following formula:
A0 = 1
For i ≥ 1, Ai = j=0 to i-1 ∑ f(Aj)

You are given a positive integer N. Find the value of AN.

Constraints
N is an integer between 1 and 100, inclusive.

Input
The input is given from Standard Input in the following format:
N

Output
Print the answer.
*/

ll ds(ll n) {
    ll s = 0;
    string st = to_string(n);
    for (char c : st) s += c - '0';
    return s;
}

void solve(int n){
    if (!n) { cout << 1 << "\n"; return; }
    vll a(n+1);
    a[0] = 1;
    ll res = ds(a[0]);
    forr(i, 1, n+1) { a[i] = res; res += ds(a[i]); }
    cout << a[n] << "\n";
}

int main(){
    opIO
    int n;
    cin >> n;
    solve(n);
    return 0;
}