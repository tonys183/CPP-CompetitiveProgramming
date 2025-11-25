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
https://atcoder.jp/contests/abc418/tasks/abc418_a

Problem Statement
Takahashi is a teapot.
Since he is a teapot, he will gladly accept tea, but will refuse any other liquid.
Determine whether you can pour a liquid named 
S into him.

You are given a string 
S of length 
N consisting of lowercase English letters.
Determine whether 
S is a string that ends with tea.

Constraints
1≤N≤20
N is an integer.
S is a string of length 
N consisting of lowercase English letters.

Input
The input is given from Standard Input in the following format:
N
S

Output
If 
S is a string that ends with tea, print Yes; otherwise, print No.
*/

int n;
string S;

void solve() {
    if(n >= 3 && S.substr(n - 3) == "tea") cout << "Yes" << "\n"; 
    else cout << "No" << "\n";
}

int main() {
    opIO
    cin >> n;
    cin >> S;
    solve();
    return 0;
}