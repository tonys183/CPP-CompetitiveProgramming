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
https://atcoder.jp/contests/abc432/tasks/abc432_a

Problem Statement
You are given three digits A,B,C between 1 and 9, inclusive.

Find the maximum value among all 3-digit integers that can
be formed by arranging A,B,C in any order and concatenating them.

Constraints
A,B,C are digits between 1 and 9, inclusive.

Input
The input is given from Standard Input in the following format:
A B C

Output
Output the answer.
*/

int a, b, c;

void solve(){
    
}

int main(){
    opIO
    cin >> a >> b >> c;
    vi d = {a, b, c};
    sort(ALL(d), greater<int>());
    cout << d[0] << d[1] << d[2] << "\n";
    return 0;
}