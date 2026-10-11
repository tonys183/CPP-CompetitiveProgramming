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
https://atcoder.jp/contests/abc429/tasks/abc429_a

Problem Statement
You are given positive integers N and M.
Print N lines.
The i-th line (1 ≤ i ≤ N) should contain OK 
if i ≤ M, and Too Many Requests otherwise.

Constraints
1 ≤ N ≤ 10
1 ≤ M ≤ 10
N and M are integers.

Input
The input is given from Standard Input in the following format:
N M

Output
Print N lines according to the instructions in the problem statement.
*/

int n, m;

void solve(){
    
}

int main(){
    opIO
    cin >> n >> m;
    forr(i, 1, n+1){
        cout << (i <= m ? "OK" : "Too Many Requests") << "\n";
    }
    return 0;
}