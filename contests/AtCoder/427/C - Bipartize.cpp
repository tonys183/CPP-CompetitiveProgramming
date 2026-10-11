#include <bits/stdc++.h>

#define POWEROFTWO(n) ((n) > 0 && !((n) & ((n) - 1)))
#define SET(m, i) ((m) | (1 << (i)))
#define TEST(m, i) ((m) & (1 << (i)))
#define CLEAR(m, i) ((m) &~ (1 << (i)))
#define DEBUG(n) (cout << (n) << "\n");
#define CLEAN(arr) (memset(arr, 0, sizeof(arr)))
#define ALL(v) (v).begin(), (v).end()
#define forr(i, a, b) for(auto i = (a); i < (b); i++)
#define YN(x) cout << ((x) ? "YES" : "NO") << "\n";
#define opIO ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://atcoder.jp/contests/abc427/tasks/abc427_c

Problem Statement
There is a simple undirected graph with N vertices and M edges. 
The graph consists of vertex 1, vertex 2,…, vertex N, and the 
i-th edge (1 ≤ i ≤ M) connects vertices ui and vi.

You will perform the following operation zero or more times:
Choose one edge that has not been deleted yet, and delete it.

Your goal is to make the graph bipartite. Find the minimum number of 
operations needed to make the graph after the operations bipartite.

What it means for a graph to be simple?
A graph is simple if and only if it has no self-loops 
(edges where ui=vi) or multi-edges (pairs of edges where ui=uj and vi=vj).

What is a bipartite graph?
A bipartite graph is a graph where it is possible to color each vertex 
black or white satisfying the following condition:
For every edge, the two vertices connected by that 
edge have different colors.


Constraints
2 ≤ N ≤ 10
1 ≤ M ≤ (N(N−1) / 2)
1 ≤ ui < vi ≤ N (1 ≤ i ≤ M)
The given graph is simple.
All input values are integers.

Input
The input is given from Standard Input in the following format:
N M
u1 v1
u2 v2
⋮
uM vM 
 
Output
Print the number of operations that need to be performed to make the graph bipartite.
*/

void solve(int n, int m, vpii& e){
    int res = m;
    forr(i, 0, (1 << n)){
        int c = 0;
        for(auto& ed : e){
            int a = ed.first; int b = ed.second;
            bool at = TEST(i, a); bool bt = TEST(i, b);
            if(at == bt) c++;
        }
        res = min(res, c);
    }
    cout << res << "\n";
}

int main(){
    opIO
    int n, m;
    cin >> n >> m;
    vpii e(m);  
    forr(i, 0, m){
        cin >> e[i].first >> e[i].second;
        e[i].first--; e[i].second--;    
    }
    solve(n, m, e);
    return 0;
}