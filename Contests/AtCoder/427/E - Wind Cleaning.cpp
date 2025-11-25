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
typedef vector<string> vs;
typedef pair<vi, int> pvii;
typedef set<vi> svi;

/*
https://atcoder.jp/contests/abc427/tasks/abc427_e

Problem Statement
There is a grid with H rows and W columns. Let (i,j) denote the cell 
at the i-th row from the top and j-th column from the left.

Takahashi is on one of the cells in this grid, and there is trash on some cells of the grid.

The states of the cells are given by H strings S1,S2,…,SH of length W, 
where S i,j denotes the j-th character of Si and represents the following state:
If S i,j = T, cell (i,j) is the cell where Takahashi is.
If S i,j = #, cell (i,j) is a cell with trash.
If S i,j = ., cell (i,j) is an empty cell without trash.
There is no trash on the cell where Takahashi is.

He can repeatedly perform the following operation:

Choose one of the four directions (up, down, left, or right), and move all trash simultaneously 
one cell in that direction. Here, if trash goes outside the grid, the trash disappears, 
and if trash moves to the cell where he is, he gets dirty.
Determine whether it is possible for him to make all trash disappear without getting dirty, 
and if possible, find the minimum possible number of operations.

Constraints
2 ≤ H,W ≤ 12
Si is a string of length W consisting of T, #, and .
There is exactly one (i,j) such that S i,j = T.
There is at least one (i,j) such that Si,j = #.

Input
The input is given from Standard Input in the following format:
H W
S1 
S2 
⋮
SH
​
Output
If it is possible for Takahashi to make all trash disappear without getting dirty, 
print the minimum possible number of operations. Otherwise, print -1.
*/

int valid(int i, int j, int h, int w) {
    return i >= 0 && i < h && j >= 0 && j < w;
}

void solve(int h, int w, int tr, int tc, vi &m){ 
    vpii dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    queue<pvii> q; svi vis;
    q.push({m, 0}); vis.insert(m);

    while (!q.empty()) {
        vi m = q.front().first; int dist = q.front().second; q.pop();
        for(auto& dir : dirs) {
            vi mTemp(h*w, 0);
            int p = 1, temp = 0;

            forr(i, 0, h) {
                forr(j, 0, w) {
                    if (m[i*w+j]) {
                        int ni = i+dir.first; int nj = j+dir.second;
                        if (ni == tr && nj == tc) { p = 0; break; }
                        if (valid(ni, nj, h, w) && !mTemp[ni*w+nj]) {
                            mTemp[ni*w+nj] = 1; temp++;
                        }
                    }
                }
                if (!p) break;
            }

            if (p) {
                if (!temp) { cout << dist+1 << "\n"; return; }
                if (vis.find(mTemp) == vis.end()) { vis.insert(mTemp); q.push({mTemp, dist+1}); }
            }
        }
    }
    cout << -1 << "\n";
}

int main(){
    opIO
    int h, w, tr, tc, res=0;
    cin >> h >> w;
    vs s(h);
    vi m(h*w, 0);   
    forr(i, 0, h) {
        cin >> s[i];
        forr(j, 0, w) {
            if (s[i][j] == 'T') { tr = i; tc = j; } 
            else if (s[i][j] == '#') { m[i*w+j] = 1; res++; }
        }
    }
    
    if (!res) { cout << 0 << "\n"; return 0; }
    solve(h, w, tr, tc, m);
    return 0;
}