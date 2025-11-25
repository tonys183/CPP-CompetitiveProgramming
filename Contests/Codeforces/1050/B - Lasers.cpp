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
https://codeforces.com/contest/2148/problem/B

There is a 2D-coordinate plane that ranges from (0,0) to (x,y) . 
You are located at (0,0) and want to head to (x,y).

However, there are n horizontal lasers, with the i-th laser continuously 
spanning (0,ai) to (x,ai). Additionally, there are also m vertical lasers, 
with the i-th laser continuously spanning (bi,0) to (bi,y).

You may move in any direction to reach (x,y), but your movement must be a 
continuous curve that lies inside the plane. Every time you cross a 
vertical or a horizontal laser, it counts as one crossing. 
Particularly, if you pass through an intersection point between two lasers, it counts as two crossings.

For example, if x=y=2 , n=m=1 , a=[1] , b=[1], the movement can be as follows:

What is the minimum number of crossings necessary to reach (x,y)?

Input
The first line contains t (1 ≤ t ≤ 10^4)  — the number of test cases.

The first line of each test case contains four integers n, m, x, and y (1 ≤ n, m ≤ 2⋅10^5, 2 ≤ x, y ≤ 10^9).

The following line contains n integers a1,a2,…,an (0 < ai < y),
the y-coordinates of the horizontal lasers. It is guaranteed that ai > ai−1.

The following line contains m integers b1,b2,…,bm (0 < bi < x),
the x-coordinates of the vertical lasers. It is guaranteed that bi > bi−1 for all i > 1.

It is guaranteed that the sum of n and m over all test cases does not exceed 2⋅10^5.

Output
For each test case, output the minimum number of crossings necessary to reach (x,y).
*/

void solve() {
    
}

int main(){
    opIO
    int t;
    cin >> t;
    while(t--){
        int n, m;
        ll x, y;
        cin >> n >> m >> x >> y;
        for (int i=0; i<n; i++) { ll tempo; cin >> tempo; }
        for (int j=0; j<m; j++) { ll tempo; cin >> tempo; }
        cout << (n + m) << '\n';
    }
    return 0;
}