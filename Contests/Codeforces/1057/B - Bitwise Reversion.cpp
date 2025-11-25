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
https://codeforces.com/contest/2153/problem/B

You are given three non-negative integers x, y and z. 
Determine whether there exist three non-negative integers 
a, b and c satisfying the following three conditions:
a & b = x
b & c = y
a & c = z
Where & denotes the bitwise AND operation.

Input
Each test contains multiple test cases. The first line contains the 
number of test cases t (1 ≤ t ≤ 10^4). The description of the test cases follows.

The first and only line of each test case contains three integers 
x, y and z (0 ≤ x, y, z ≤ 10^9) — the target values of a & b, b & c and a & c, respectively.

Output
For each test case, output "YES" if there exists three non-negative integers a, b, and c
satisfying the above conditions, and "NO" otherwise.

You can output the answer in any case (upper or lower). 
For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.
*/

void solve(ll x, ll y, ll z){
    int t = ((y & z) | x) == x && ((x & z) | y) == y && ((x & y) | z) == z;
    YN(t);
}

int main(){
    opIO
    int t;
    cin >> t;
    while(t--){ 
        ll x, y, z;
        cin >> x >> y >> z;
        solve(x, y, z);
    }
    return 0;
}