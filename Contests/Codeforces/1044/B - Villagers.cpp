#include <bits/stdc++.h>

#define SET(m, i) ((m) | (1 << (i)))
#define TEST(m, i) ((m) & (1 << (i)))
#define CLEAR(m, i) ((m) &~ (1 << (i)))
#define DEBUG(n) (cout << (n) << endl)
#define CLEAN(arr) (memset(arr, 0, sizeof(arr)))
#define ALL(v) (v).begin(), (v).end()
#define opIO ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://codeforces.com/contest/2133/problem/B

Steve lives in a village with n other villagers. Unfortunately, due to disputes over 
the distribution of emeralds, none of those villagers are friends with any other villager. 
Furthermore, villager i initially has a grumpiness of gi.

Steve can perform the following operation any number of times:

Select two villagers i and j and give them max(gi,gj) emeralds to share. Both of their 
grumpinesses decrease by min(gi,gj), and they become friends with each other if they weren't already.
Steve wishes to make every villager friends with every other villager (possibly through some intermediate friendships); 
that is, from any villager, you can follow a path of friendships to reach any other villager. 
Since he does not want to inflate the village economy too much, calculate the minimum number of emeralds he must give away to accomplish this.

Input
Each test contains multiple test cases. The first line contains the number of 
test cases t (1 ≤ t ≤ 10^4). The description of the test cases follows.

The first line of each test case contains a single integer 
n (2 ≤ n ≤ 2⋅10^5) — the number of villagers.

The second line of each test case contains 
n integers g1,g2,…,gn (1 ≤ gi ≤ 10^9) — the initial grumpiness of each villager.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅10^5.

Output
For each test case, output a single integer — the minimum number of emeralds Steve must give away to make everyone friends.
*/

void solve(int n, vll& g) {
    sort(ALL(g));
    ll minE = 0;
    for (int i=n-1; i>=0; i-=2) minE += g[i];
    cout << minE << "\n";
}

int main() {
    opIO
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll g(n);
        for (int i=0; i<n; i++) cin >> g[i];
        solve(n, g);
    }
    return 0;
}