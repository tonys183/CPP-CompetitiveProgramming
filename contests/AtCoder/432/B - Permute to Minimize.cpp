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
https://atcoder.jp/contests/abc432/tasks/abc432_b

Problem Statement
You are given a positive integer X.

Find the minimum value among all positive integers that can be obtained 
by rearranging the digits appearing in the decimal representation of 
X (without leading zeros) such that there is no leading zero.

Constraints
1 ≤ X < 10^5
X is an integer.

Input
The input is given from Standard Input in the following format:
X

Output
Output the answer.
*/

int x;

void solve(){
    string d = to_string(x);
    sort(ALL(d));

    if (d[0] == '0') {
        forr(i, 1, d.length()) {
            if (d[i] != '0') { swap(d[0], d[i]); break; }
        }
    }
    cout << d << "\n";
}

int main(){
    opIO
    cin >> x;
    solve();
    return 0;
}