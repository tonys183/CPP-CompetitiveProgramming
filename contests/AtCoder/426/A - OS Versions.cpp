#include <bits/stdc++.h>

#define POWEROFTWO(n) ((n) > 0 && !((n) & ((n) - 1)))
#define SET(m, i) ((m) | (1 << (i)))
#define TEST(m, i) ((m) & (1 << (i)))
#define CLEAR(m, i) ((m) &~ (1 << (i)))
#define DEBUG(n) (cout << (n) << endl)
#define CLEAN(arr) (memset(arr, 0, sizeof(arr)))
#define ALL(v) (v).begin(), (v).end()
#define forr(i, a, b) for(auto i = (a); i < (b); i++)
#define opIO ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://atcoder.jp/contests/abc426/tasks/abc426_a
Problem Statement
The versions of a certain OS in chronological order are "Ocelot", "Serval", "Lynx".
Determine whether version X is the same as or newer than version Y.

Constraints
Each of X and Y is one of "Ocelot", "Serval", "Lynx" (without quotation marks).

Input
The input is given from Standard Input in the following format:
X Y

Output
If version X is the same as or newer than version Y, print Yes; 
otherwise, print No.
*/

void solve() {

}

int main(){
    opIO
    string a, b;
    cin >> a >> b;
    int aVal = (a == "Ocelot" ? 0 : (a == "Serval" ? 1 : 2));
    int bVal = (b == "Ocelot" ? 0 : (b == "Serval" ? 1 : 2));

    if (aVal >= bVal) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    return 0;
}