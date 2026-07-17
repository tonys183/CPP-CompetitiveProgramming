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
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
Island Perimeter
https://leetcode.com/problems/island-perimeter/

You are given row x col grid representing a map where grid[i][j] = 1 represents land and grid[i][j] = 0 represents water.
Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, 
and there is exactly one island (i.e., one or more connected land cells).

The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. 
One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.
*/

int out(int r, int c, int i, int j){
    return !(i >= 0 && i < r && j >= 0 && j < c);
}

int islandPerimeter(vvi& grid) {
    int peri = 0;
    int r = grid.size();
    int c = grid[0].size();
    
    forr(i, 0, r){
        forr(j, 0, c){
            if (grid[i][j]){
                if(out(r,c,i,j-1) || !grid[i][j-1]) peri++;
                if(out(r,c,i-1,j) || !grid[i-1][j]) peri++;
                if(out(r,c,i,j+1) || !grid[i][j+1]) peri++;
                if(out(r,c,i+1,j) || !grid[i+1][j]) peri++;
            }
        }
    }
    return peri;
}

int main(){
    opIO
    vvi grid = {{1, 0}};

    cout << islandPerimeter(grid) << "\n";
    return 0;
}
