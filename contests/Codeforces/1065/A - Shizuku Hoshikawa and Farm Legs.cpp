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
https://codeforces.com/contest/2171/problem/A

Kaori wants to spend the day with Shizuku! However, the zoo 
is closed, so they are visiting Farmer John's farm instead.

At Farmer John's farm, Shizuku counts n legs. It is known 
that only chickens and cows live on the farm:
a chicken has 2 legs, while a cow has 4.

Count how many different configurations of Farmer John's farm are possible. 
Two configurations are considered different if they contain either a 
different number of chickens, a different number of cows, or both.
Note that Farmer John's farm may contain zero chickens or zero cows.

Input
The first line contains a single integer t (1 ≤ t ≤ 100),
the number of test cases.

The only line of each test case contains a single integer n (1 ≤ n ≤ 100).

Output
For each test case, output a single integer, the number of different 
configurations of Farmer John's farm that are possible.
*/

int t, n;

void solve(){
    cin >> n;
    if (n%2) { cout << 0 << "\n"; return; }
    cout << (n/4)+1 << "\n";
}

int main(){
    opIO
    cin >> t;
    while(t--) solve();
    return 0;
}