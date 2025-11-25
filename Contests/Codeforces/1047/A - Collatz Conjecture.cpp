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
https://codeforces.com/contest/2137/problem/A

You are doing a research paper on the famous Collatz Conjecture. In your experiment, 
you start off with an integer x, and you do the following procedure k times:    

If x is even, divide x by 2.
Otherwise, set x to (3*x+1).
For example, starting off with 21 and doing the procedure 5 times, you get 21 → 64 → 32 → 16 → 8 → 4.

After all k iterations, you are left with the final value of x. 
Unfortunately, you forgot the initial value. Please output any possible initial value of x.

Input
Each test contains multiple test cases. The first line contains the number of 
test cases t (1 ≤ t ≤ 400). The description of the test cases follows.

The first line of each test case contains two integers k and x (1 ≤ k,x ≤ 20).

Output
For each test case, print any possible initial value on a new line. It can be shown that the answer always exists.
*/

void solve(int k, int x) {
    int st = x;
    for(int i=0; i<k; i++) st *= 2;
    cout << st << "\n"; 
}

int main(){
    opIO
    int t;
    cin >> t;
    while(t--) {
        int k, x;
        cin >> k >> x;
        solve(k, x);
    }
    return 0;
}