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

/*
https://atcoder.jp/contests/abc425/tasks/abc425_a
Problem Statement
You are given a positive integer N.

For i=1,2,…,N, calculate (−1)^i × i^3, and find the sum of these N values.

That is, find i=1 to N ∑ (−1)^i × i^3 .

Constraints
N is an integer between 1 and 10, inclusive.

Input
The input is given from Standard Input in the following format:
N

Output
Output the value of sum.
*/

void solve() {
    
}

int main(){
    opIO
    int n;
    cin >> n;
    ll r = 0;
    forr(i, 1, n+1) {
        if (!(i % 2)) r += 1LL * i*i*i;
        else r -= 1LL * i*i*i;
    }
    cout << r << "\n";
    return 0;
}