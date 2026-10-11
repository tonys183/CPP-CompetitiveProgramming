#include <bits/stdc++.h>

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
typedef long double lb;
typedef unordered_map<int, int> unii;

/*
https://atcoder.jp/contests/abc418/tasks/abc418_b

Problem Statement
I begin with T and end with T, and I am full of T. What am I?

For a string t, define the filling rate as follows:

- If the first and last characters of t are both t and ∣t∣≥3: Let x be the number of t in t. 
Then the filling rate of t is (x−2 / |t|−2), where |t| denotes the length of t.
- Otherwise: the filling rate of t is 0.
You are given a string S. 
Find the maximum possible filling rate of a substring of S.

What is a substring?
Constraints
1≤∣S∣≤100
S is a string consisting of lowercase English letters.
Input
The input is given from Standard Input in the following format:

S
Output
Print the maximum possible filling rate of a substring of 
S.

Your output will be judged as correct when the absolute error from the true value is at most 
10^−9
*/

int n;
string s;

void solve() {
    n = s.size();
    lb maxiRate = 0.0;
    vi sumPrefi(n+1,0);
    for (int i=0; i<n; i++) sumPrefi[i+1] = sumPrefi[i] + (s[i] == 't' ? 1 : 0);

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if((j-i+1) >= 3 && s[i] == 't' && s[j] == 't'){
                int numbT = sumPrefi[j+1] - sumPrefi[i];
                lb rate = static_cast<lb>(numbT-2) / ((j-i+1)-2);
                maxiRate = max(maxiRate, rate);
            }
        }
    }
    cout << fixed << setprecision(17) << maxiRate << "\n";
}

int main() {
    opIO
    cin >> s;
    solve();
    return 0;
}