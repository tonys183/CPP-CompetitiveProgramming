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
https://atcoder.jp/contests/abc424/tasks/abc424_c

Problem Statement
Takahashi is playing a game. This game has N skills numbered 1 through N.

You are given N pairs of integers (A1 ,B1),…,(AN ,BN).
If (Ai, Bi) = (0,0), then Takahashi has already learned skill i.
Otherwise, Takahashi can learn skill i if and only if 
at least one of skills Ai and Bi has already been learned.
Including the skills already learned, find the number of skills that Takahashi can ultimately learn.

Constraints
1 ≤ N ≤ 2×10^5
(Ai, Bi) = (0,0) or 1 ≤ Ai, Bi ≤ N
All input values are integers.
​
Input
The input is given from Standard Input in the following format:
N
A1 B1
A2 B2
⋮
AN BN
 
Output
Output the answer.
*/

void solve(vvi &sk, vi &L, queue<int> &q, int c){
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int v: sk[x]){
            if (!L[v]) { L[v] = 1; q.push(v); c++; }
        }
    }
    cout << c << "\n";
}

int main(){
    opIO
    int n; 
    cin >> n;
    vi A(n+1), B(n+1);
    for(int i=1; i<=n; i++) cin >> A[i] >> B[i];

    vvi sk(n+1); vi L(n+1, 0); int c = 0;
    queue<int> q;
    for(int i=1; i<=n; i++){
        if (!A[i] && !B[i]) { L[i] = 1; q.push(i); c++; } 
        else {
            sk[A[i]].push_back(i);
            sk[B[i]].push_back(i);
        }
    }
    solve(sk, L, q, c);
    return 0;
}