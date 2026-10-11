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
https://atcoder.jp/contests/abc423/tasks/abc423_b

Problem Statement
There are N+1 rooms arranged in a line, numbered 0,1,…,N in order.

Between the rooms, there are N doors numbered 1,2,…,N. 
Door i is between rooms i−1 and i.
For each door, a value Li representing the lock state is given. 
When Li=0, door i is unlocked, and when Li=1, door i is locked.

There are two people, one in room 0 and the other in room N. 
Each person can move between rooms i−1 and i only when door i is unlocked.

Find the number of rooms that neither of the two people can reach.

Constraints
2 ≤ N ≤ 100
Li ∈ {0,1}
All input values are integers.

Input
The input is given from Standard Input in the following format:
N
L1 L2 … LN
 
Output
Output the answer.
*/

void solve(int n, vi &ro) {
    int le = n, ri = -1;
    for(int i=0; i<n; i++) if(ro[i]) { le = i; break; }
    for(int i=n-1; i>=0; i--) if(ro[i]) { ri = i; break; }
    int res = max(0, ri - le);
    cout << res << "\n";
}

int main(){
    opIO
    int n;
    cin >> n;
    vi ro(n);
    for(int i=0; i<n; i++) cin >> ro[i];
    solve(n, ro);
    return 0;
}