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
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://atcoder.jp/contests/abc422/tasks/abc422_b

Problem Statement
There is a grid with H rows and W columns. Let (i,j) denote the cell at the i-th row (1≤i≤H) from the top and 
the j-th column (1 ≤ j ≤ W) from the left. That is, (1,1) is the cell at the top-left corner and (H,W) is the cell at the 
bottom-right corner. The cell at the i-th row from the top and the j-th column
j-th column (1 ≤ j ≤ W) from the left.

Each cell is painted with one color, white or black. The color painted on the cells is represented by H strings 
S1,S2,…,SH. When the j-th character (1 ≤ j ≤ W) of Si (1 ≤ i ≤ H) is ".", cell (i,j) is painted white, and when the 
j-th character (1 ≤ j ≤ W) of Si (1 ≤ i ≤ H) is "#", cell (i,j) is painted black.
​
Determine whether the grid satisfies the following condition:
For every black cell, the number of horizontally or vertically adjacent cells that are painted black is 2 or 4.
Here, cells (i,j) (1 ≤ i ≤ H,1 ≤j ≤ W) and (k,l) (1 ≤ k ≤ H,1 ≤ l ≤ W) are horizontally or vertically adjacent if and only if ∣i−k∣ + ∣j−l∣ = 1.

Constraints
1 ≤ H ≤ 20
1 ≤ W ≤ 20
H and W are integers.
Si is a string of length W consisting of "." and "#" (1 ≤ i ≤ H).

Input
The input is given from Standard Input in the following format:
H W
S1
S2
⋮
SH
​
Output
Output Yes if the given grid satisfies the condition, and No if it does not satisfy the condition.
*/

bool valid(int newi, int newj, int H, int W, vs &grid) {
    return (newi >= 0 && newi < H && newj >= 0 && newj < W && grid[newi][newj] == '#');
}

void solve(int H, int W, vs &grid) {
   const pair<int, int> dirs[] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(grid[i][j] == '#'){
                int bN = 0;
                for(int k=0; k<4; k++){
                    int newi = i+dirs[k].first; int newj = j+dirs[k].second;
                    if(valid(newi, newj, H, W, grid)) bN++;
                }
                if(bN != 2 && bN != 4){
                    cout << "No" << "\n";
                    return;
                }
            }
        }
    }
    cout << "Yes" << "\n";
}

int main(){
    opIO
    int H, W;
    cin >> H >> W;
    vs grid(H);
    for(int i = 0; i < H; i++) cin >> grid[i]; 
    solve(H, W, grid);
    return 0;
}