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
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://atcoder.jp/contests/abc421/tasks/abc421_a

Problem Statement
Mansion AtCoder has N rooms numbered from room 1 to room N.
Each room i is inhabited by one person named Si.

You are to deliver a package addressed to Mr/Ms Y in room X. Determine whether the destination is correct.

Constraints
1 ≤ N ≤ 100
1 ≤ X ≤ N
N and X are integers.
Si and Y are strings consisting of lowercase English letters with length between 1 and 10, inclusive.

Input
The input is given from Standard Input in the following format:
N
S1
S2
⋮
SN
X Y

Output
Print Yes if the name of the person living in room X is Y, and No otherwise.
*/

void solve() {
    
}

int main() {
    int n, x;
    cin >> n;
    string y;
    
    vs s(n+1);
    for (int i=0; i<n; i++) cin >> s[i];
    
    cin >> x >> y;
    cout << (s[x-1] == y ? "Yes\n" : "No\n");
    return 0;
}