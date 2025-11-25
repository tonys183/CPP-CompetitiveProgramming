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
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://codeforces.com/contest/2137/problem/C

You are given two integers a and b . You are to perform the following procedure:

First, you choose an integer k such that b is divisible by k . 
Then, you simultaneously multiply a by k and divide b by k.

Find the greatest possible even value of a+b. If it is impossible to make a+b even, 
output −1 instead.

Input
Each test contains multiple test cases. The first line contains the number of 
test cases t (1 ≤ t ≤ 10^4). The description of the test cases follows.

The first line of each test case contains two integers a and b (1 ≤ a,b ≤ a⋅b ≤ 10^18).

Output
For each test case, output the maximum even value of a+b on a new line.
*/

void solve(ll a, ll b) {
    int no = -1;
    if (a%2 == b%2) {
        if (!(a%2)) cout << a*(b/2) + 2 << "\n";
        else cout << a*b + 1 << "\n";
    }
    else {
        if (!(a%2)) cout << no << "\n";
        else {
            if (b%4) cout << no << "\n";
            else cout << a*(b/2) + 2 << "\n";
        }
    }
}

int main(){
    opIO
    int t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}