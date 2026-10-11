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
https://atcoder.jp/contests/abc429/tasks/abc429_b

Problem Statement
You are given an integer sequence of length N, A=(A1,A2,…,AN), and an integer M.

Determine whether it is possible to remove one of the N elements of 
A so that the sum of the remaining (N−1) elements is exactly M.

Constraints
2 ≤ N ≤ 100
0 ≤ M ≤ 10000
0 ≤ Ai ≤ 100
All input values are integers.

Input
The input is given from Standard Input in the following format:
N M
A1 A2 … AN
 
Output
If it is possible to remove one of the N elements of A so 
that the sum of the remaining (N−1) elements is exactly M, 
print Yes; otherwise, print No.
*/

int n, m;
ll sum = 0;

void solve(vi &a){
    forr(i, 0, n){
        if(sum - a[i] == m) {
            YesNo(1);
            return;
        }
    }
    YesNo(0);
}

int main(){
    opIO
    cin >> n >> m;
    vi a(n);
    forr(i, 0, n) {
        cin >> a[i]; 
        sum += a[i];
    }
    solve(a);
    return 0;
}