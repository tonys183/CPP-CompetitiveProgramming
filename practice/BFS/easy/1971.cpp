#include <bits/stdc++.h>

#define POWEROFTWO(n) ((n) > 0 && !((n) & ((n) - 1)))
#define SET(m, i) ((m) | (1 << (i)))
#define TEST(m, i) ((m) & (1 << (i)))
#define CLEAR(m, i) ((m) &~ (1 << (i)))
#define DEBUG(n) (cout << (n) << "\n");
#define CLEAN(arr) (memset(arr, 0, sizeof(arr)))
#define ALL(v) (v).begin(), (v).end()
#define forr(i, a, b) for(auto i = (a); i < (b); i++)
#define YESNO(x) cout << ((x) ? "YES" : "NO") << "\n";
#define YesNo(x) cout << ((x) ? "Yes" : "No") << "\n";
#define truefalse(x) cout << ((x) ? "true" : "false") << "\n";
#define opIO ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
Find if Path Exists in Graph
https://leetcode.com/problems/find-if-path-exists-in-graph/

There is a bi-directional graph with n vertices, where each vertex is labeled from 0 to n - 1 (inclusive). 
The edges in the graph are represented as a 2D integer array edges, where each edges[i] = [ui, vi] 
denotes a bi-directional edge between vertex ui and vertex vi. Every vertex pair is connected by at most 
one edge, and no vertex has an edge to itself.

You want to determine if there is a valid path that exists from vertex source to vertex destination.
Given edges and the integers n, source, and destination, return true if there is a valid path from source to destination, or false otherwise.
*/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool validPath(int n, vvi& edges, int source, int destination) {
    if (source == destination) return true;
    vvi m(n);
    int s = edges.size();
    for(int i=0;i<s;i++){
        m[edges[i][0]].push_back(edges[i][1]);
        m[edges[i][1]].push_back(edges[i][0]);
    } 

    queue<int> q;
    vi vis(n, 0);
    vis[source] = 1;
    q.push(source);

    while(!q.empty()){
        int v = q.front(); q.pop();
        if (v == destination) return true;
        
        for(int i=0;i<m[v].size();i++){
            int u = m[v][i];
            if (!vis[u]) {
                vis[u] = 1;
                q.push(u);
            }
        }
    }
    return false;
}

int main(){
    opIO
    vvi graph1 = {
        {0, 1},
        {1, 2},
        {2, 0}
    };
    truefalse(validPath(3, graph1, 0, 2));
    return 0;
}
