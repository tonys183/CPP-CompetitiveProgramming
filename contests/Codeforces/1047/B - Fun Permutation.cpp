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
https://codeforces.com/contest/2137/problem/B

You are given a permutation∗ p of size n.

Your task is to find a permutation q of size n such that 
GCD (pi+qi, pi+1+qi+1) ≥ 3 for all 1 ≤ i < n. In other words, 
the greatest common divisor of the sum of any two adjacent positions should be at least 3.

It can be shown that this is always possible.

∗
A permutation of length m is an array consisting of m distinct integers from 1 to m in arbitrary order.

†
gcd(x,y) denotes the greatest common divisor (GCD) of integers x and y.

Input
Each test contains multiple test cases. The first line contains the number of 
test cases t (1 ≤ t ≤ 10^4). The description of the test cases follows.

The first line of each test case contains an integer n (2 ≤ n ≤ 2⋅10^5).

The second line contains n integers p1,p2,…,pn (1 ≤ pi ≤ n).

It is guaranteed that the given array forms a permutation.
It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^5.

Output
For each test case, output the permutation q on a new line. 
If there are multiple possible answers, you may output any.
*/

void solve(int n){
    vi p(n); vi q(n);
    for (int i=0; i<n; i++) cin >> p[i];
    for (int i=0; i<n; i++) q[i] = n+1 - p[i];
    for (int i=0; i<n; i++) cout << q[i] << (i == n-1 ? "" : " ");
    cout << "\n";
}

int main(){
    opIO
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}