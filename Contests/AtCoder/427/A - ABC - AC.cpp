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
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
https://atcoder.jp/contests/abc427/tasks/abc427_a

Problem Statement
You are given a string S consisting of uppercase English letters.
Here, the length of S is odd.

Print the string obtained by deleting the middle character of S. 
The middle character of S is the (L+1 / 2)-th character of S, where L is the length of S.

Constraints
S is a string consisting of uppercase English letters.
The length of S is an odd number between 3 and 9, inclusive.

Input
The input is given from Standard Input in the following format:
S

Output
Print the string as instructed in the problem statement.
*/

void solve(){
    
}

int main(){
    opIO
    string s;
    cin >> s;
    s.erase(s.length() / 2, 1);
    cout << s << "\n";
    return 0;
}