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
https://atcoder.jp/contests/abc422/tasks/abc422_a

Problem Statement
Takahashi is playing a game. This game has eight worlds, and each world has eight stages. The stages have an order, and the first stage 
is the 1st stage in the 1st world. The next stage after the j-th stage (1 ≤ j ≤ 8) in the i-th world (1 ≤ i ≤ 8) is as follows:

When j<8, the next stage is the (j+1)-th stage in the i-th world.
When i<8, j=8, the next stage is the 1st stage in the (i+1)-th world.
When  i=8, j=8, there is no next stage. This stage is the last stage.

The name of the j-th stage (1 ≤ j ≤ 8) in the i-th world (1 ≤ i ≤ 8) is i-j. For example, the name of the 
first stage is 1-1, and the name of the last stage is 8-8.

Given the stage name S of the stage Takahashi is currently playing, output the stage name of the next stage.

Constraints
S is the stage name of one of the stages.
S is not 8-8.

Input
The input is given from Standard Input in the following format:
S

Output
Output the stage name of the next stage.
*/

void solve(string s) {
    int w = s[0]-'0';
    int stg = s[2]-'0';

    if (stg < 8) cout << w << "-" << (stg + 1) << "\n";
    else cout << (w + 1) << "-1" << "\n";
}

int main(){
    opIO
    string s;
    cin >> s;
    solve(s);
    return 0;
}