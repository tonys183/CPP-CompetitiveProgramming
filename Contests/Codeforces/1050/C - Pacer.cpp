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
typedef pair<ll, int> pli;
typedef vector<pli> vpli;

/*
https://codeforces.com/contest/2148/problem/C

Farmer John is running the FitnessGram Pacer Test! Farmer John takes one minute 
to run to the other side of the gym. Therefore, at the start of each minute, 
FJ can choose to either run to the other side of the gym or stay in place. 
If he chooses to run to the other side of the gym, he gains one point.

FJ will run the Pacer Test until the start of the m-th minute. 
Initially (at the start of the 0-th minute), FJ is at the starting 
side of the gym, which we will denote as side 0. 
The opposite side of the gym is denoted side 1.

The pacer test audio plays n times. At the start of the ai-th minute, 
FJ must be at the bi-th side of the gym.

What is the maximum number of points FJ can acquire while ensuring that he meets the audio's requirements?

Input
The first line contains an integer t (1 ≤ t ≤ 10^4) — the number of test cases.

The first line of each test case contains two integers 
n and m (1 ≤ n ≤ 2⋅10^5, n ≤ m ≤ 10^9) — the number of requirements and the number of total minutes.

The following n lines contain two integers ai and bi
(1 ≤ ai ≤ m, bi ∈ {0, 1}) — the i-th requirement by the audio.
It is guaranteed that ai > ai−1 over all i > 1.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^5.

Output
For each test case, output the maximum number of points that FJ can acquire.
*/

void solve(int n, ll m, vpli &ado) {
    ll res = 0; ll t = 0; int posi = 0;
    for (int i=0; i<n; i++) {
        ll curt = ado[i].first; int curposi = ado[i].second;
        res += (curt-t) - (((curt-t) - (abs(curposi - posi))) % 2);
        t = curt; posi = curposi;
    }
    res += m - t;
    cout << res << "\n";
}


int main(){
    opIO
    int t;
    cin >> t;
    while(t--){
        int n; long long m;
        cin >> n >> m;
        vpli ado(n);
        for(int i=0; i<n; i++) {cin >> ado[i].first >> ado[i].second; }
        solve(n, m, ado);
    }
    return 0;
}