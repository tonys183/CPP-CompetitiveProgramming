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
#define opIO ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://atcoder.jp/contests/abc430/tasks/abc430_a

Problem Statement
In AtCoder Country where Takahashi lives, there is a strange law that 
"a person who possesses A or more candies must possess B or more cookies."

Takahashi possesses C candies and D cookies. 
Determine whether Takahashi is violating this law.

Constraints
1 ≤ A,B,C,D ≤ 100
All input values are integers.

Input
The input is given from Standard Input in the following format:
A B C D 

Output
Print Yes if Takahashi is violating the law, and No otherwise.
*/

int t;

void solve(){
    
}

int main(){
    opIO
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    YesNo(c >= a && d < b);
    return 0;
}