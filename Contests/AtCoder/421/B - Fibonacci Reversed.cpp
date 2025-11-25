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
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://atcoder.jp/contests/abc421/tasks/abc421_b

Problem Statement
For a positive integer x, define f(x) as follows:

Let s_x be the string obtained by representing x in decimal notation (without leading zeros), and 
let rev(s_x) be the string obtained by reversing s_x. The value of f(x) is the integer obtained 
by interpreting rev(s_x) as a decimal representation of an integer.


For example, when x=13, we have rev(s_x) = 31, so f(x)=31; when x=10, we have rev(s_x) = 01, so f(x)=1. 
Particularly, for any positive integer x, the value of f(x) is a positive integer.

You are given positive integers X and Y. Define a sequence of positive integers 
A = (a1,a2,…,a10) as follows:
a1 = X
a2 = Y
ai = f(a i−1 +a i−2)  (i≥3)
​
Find the value of a10.
Constraints
1 ≤ X, Y ≤ 10^5
All input values are integers.

Input
The input is given from Standard Input in the following format:
X Y

Output
Print the value of a10.
*/

ll f(ll x) {
    string rever = to_string(x);
    reverse(ALL(rever));
    return stoll(rever);
}

void solve(ll x, ll y) {
    vll a(10);
    a[0] = x; a[1] = y;
    for (int i=2; i<10; i++) a[i] = f(a[i-1] + a[i-2]);
    cout << a[9] << "\n";
}

int main() {
    opIO
    ll x, y;
    cin >> x >> y;
    solve(x, y);
}