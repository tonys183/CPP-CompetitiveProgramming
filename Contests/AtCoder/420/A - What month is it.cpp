#include <bits/stdc++.h>

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

/*
https://atcoder.jp/contests/abc420/tasks/abc420_a

Problem Statement
You are given integers X and Y between 1 and 12, inclusive.

Find what month it will be 
Y months after month X (for example, month 1 is January).

Constraints
X and Y are integers between 1 and 12, inclusive.

Input
The input is given from Standard Input in the following format:
X Y

Output
Output the answer as an integer.
*/

void solve(int x, int y) {
    if ((x + y) % 12 == 0) cout << 12 << "\n";
    else cout << (x + y) % 12 << "\n";
}

int main(){
    opIO
    int x,y;
    cin >> x >> y;
    solve(x,y);
    return 0;
}