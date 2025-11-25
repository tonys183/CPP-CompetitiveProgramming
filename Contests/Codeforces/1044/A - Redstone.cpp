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
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://codeforces.com/contest/2133/problem/A

Steve stumbled upon a collection of n gears, where gear i has ai teeth, and he wants to arrange them into a row.

After he arranges them, Steve will spin the leftmost gear at a speed of 1 revolution per second. 
For each of the other gears, let "x" be the number of teeth it has, "y" be the number of teeth of the gear to its left, and "z"
be the speed the gear to its left spins at. Then, its speed will be (y/x * z) revolutions per second.

Steve considers the contraption satisfactory if the rightmost gear spins at a speed of 1
revolution per second. Determine whether Steve can rearrange the gears into a satisfactory contraption.

Input
Each test contains multiple test cases. The first line contains the number of 
test cases t (1 ≤ t ≤ 100). The description of the test cases follows.

The first line of each test case contains a single integer 
n (2 ≤ n ≤ 100) — the number of gears Steve has.

The second line of each test case contains n integers 
a1,a2,…,an (2 ≤ ai ≤ 100) — the number of teeth of each gear.) — the number of teeth of each gear.

Output
For each test case, print "YES" if Steve can rearrange the gears in a satisfactory way, and "NO" otherwise.
*/

void solve(int n, vi& a) {
    sort(ALL(a));
    int s = 0;
    for (int i=0; i<n; i++) if(a[i] == a[i-1]) s = 1;
    cout << (s ? "YES" : "NO") << '\n';
}

int main(){
    opIO
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        solve(n, a);
    }
    return 0;
}