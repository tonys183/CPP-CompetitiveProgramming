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
https://codeforces.com/contest/2162/problem/C

You are given two integers a and b.
You are allowed to perform the following operation any number of times (including zero):
Choose any integer x such that 0 ≤ x ≤ a (the current value of a, not initial),
set a:=a⊕x. Here, ⊕ represents the bitwise XOR operator.
After performing a sequence of operations, you want the value of a to become exactly b.

Find a sequence of at most 100 operations (values of x used in each operation) 
that transforms a into b, or report that it is impossible.

Note that you are not required to find the minimum number of operations, 
but any valid sequence of at most 100 operations.

Input
The first line of input contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.

Each test case contains two integers a and b (1 ≤ a, b ≤ 10^9).

Output
For each test case, if it is impossible to obtain b from a
using the allowed operations, print a single line containing −1.

Otherwise, on the first line print a single integer k (0 ≤ k ≤ 100),
the number of operations. On the second line print k integers (x1,x2,…,xk),
the chosen values of x in the order you apply them.
If there are multiple valid sequences, you may print any one of them.
*/

int t, a, b;

int sb(int n) {
    if (!n) return -1;
    int res = 0;
    unsigned int x = n;
    while ((x >> 1) > 0) { x >>= 1; res++; }
    return res;
}

void solve(){
    cin >> a >> b;
    if (a == b) { cout << 0 << "\n"; return; }
    if (sb(a) < sb(b)) { cout << -1 << "\n"; return; }
    if (((a|b) == a) || ((a|b) == b)) {
        cout << 1 << "\n";
        cout << (a^b) << "\n";
        return;
    }
    
    int x1 = a^(a|b); int x2 = b^(a|b);
    cout << 2 << "\n";
    cout << x1 << " " << x2 << "\n";
}

int main(){
    opIO
    cin >> t;
    while(t--) solve();
    return 0;
}