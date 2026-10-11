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
https://atcoder.jp/contests/abc424/tasks/abc424_a

Problem Statement
There is a triangle ABC with positive area.
The lengths of the three sides of triangle ABC are a,b,c.

Determine whether triangle ABC is isosceles.

Constraints
1 ≤ a,b,c ≤ 10
A triangle with side lengths a,b,c exists, and its area is positive.
a,b,c are integers.

Input
The input is given from Standard Input in the following format:
a b c

Output
If triangle ABC is isosceles, output Yes; otherwise, output No.
*/

void solve() {
    
}

int main(){
    opIO
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a == b || b == c || a == c) ? "Yes\n" : "No\n");
    return 0;
}