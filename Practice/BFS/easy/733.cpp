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
Flood Fill
https://leetcode.com/problems/flood-fill/

You are given an image represented by an m x n grid of integers image, where image[i][j] represents the 
pixel value of the image. You are also given three integers sr, sc, and color. Your task is to perform 
a flood fill on the image starting from the pixel image[sr][sc].

To perform a flood fill:
1. Begin with the starting pixel and change its color to color.
2. Perform the same process for each pixel that is directly adjacent (pixels that share a side with the 
original pixel, either horizontally or vertically) and shares the same color as the starting pixel.
3. Keep repeating this process by checking neighboring pixels of the updated pixels and modifying 
their color if it matches the original color of the starting pixel.
4. The process stops when there are no more adjacent pixels of the original color to update.
Return the modified image after performing the flood fill.
*/

int valid(int r, int c, int i, int j, int cs, vvi image){
    return (i >= 0 && i < r && j >= 0 && j < c && image[i][j] == cs);
}

vvi floodFill(vvi& image, int sr, int sc, int color) {
    int cs = image[sr][sc];
    if (cs == color) return image;

    const pair<int, int> dirs[] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int ri = image.size(), ci = image[0].size();
    queue<pair<int, int>> q; q.push({sr,sc});
    
    image[sr][sc] = color;
    while(!q.empty()){
        int i = q.front().first, j = q.front().second; q.pop();

        for(int k=0; k<4; k++){
            int newi = i+dirs[k].first; 
            int newj = j+dirs[k].second;
            if(valid(ri, ci, newi, newj, cs, image)) {
                image[newi][newj] = color;
                q.push({newi,newj});
            }
        }

    }
    return image;
}

int main(){
    opIO
    vvi image = {
        {0, 0, 0},
        {0, 0, 0}
    };
    int sr=0, sc=0, color=0;
    vvi res = floodFill(image, sr, sc, color);
    forr(i,0,res.size()) {
        forr(j,0,res[i].size()) {
            cout << res[i][j];
        }
        cout << "\n";
    }
    return 0;
}
