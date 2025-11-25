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
https://atcoder.jp/contests/abc423/tasks/abc423_c

Problem Statement
There are N+1 rooms arranged in a line, numbered 0,1,…,N in order.

Between the rooms, there are N doors numbered 1,2,…,N. Door i is between rooms i−1 and i.
For each door, a value Li representing the lock state is given. 
When Li=0, door i is unlocked, and when Li=1, door i is locked.
​

Takahashi is initially in room R, and can move between rooms i−1 and i only 
when door i is unlocked. Also, he can perform a switching operation on door i only 
when he is in room i−1 or room i. When a switching operation is performed on door i, 
if the door is unlocked, it becomes locked, and if it is locked, it becomes unlocked.

Find the minimum number of switching operations needed to make all doors locked.

Constraints
2 ≤ N ≤ 2×10^5
0 ≤ R ≤ N
Li ∈{0,1}
All input values are integers.

Input
The input is given from Standard Input in the following format:

N R
L1 L2 … LN
​
Output
Output the answer.
*/

void solve(int n,int R,vi &ro){
    vi z;
    for(int i=0; i<n; i++) if(!(ro[i])) z.push_back(i+1);
    if(z.empty()){ cout << 0 << "\n"; return; }

    int l = z.front(); int r = z.back();
    ll k = (ll)z.size(); ll o = 0; ll extra = 0;

    for(int i=l; i<=r; i++) if(ro[i-1]) o++;
    if(R < l-1){ for(int i=R+1; i<=l-1; i++) if(ro[i-1]) extra++; } 
    else if(R > r){ for(int i=r+1; i<=R; i++) if(ro[i-1]) extra++; }
    cout << k+2 * (o+extra) << "\n";
}

int main(){
    opIO
    int n; int R;
    cin >> n >> R;
    vi ro(n);
    for(int i=0; i<n; i++) cin >> ro[i];
    solve(n,R,ro);
    return 0;
}