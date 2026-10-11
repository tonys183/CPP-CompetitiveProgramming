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
https://atcoder.jp/contests/abc426/tasks/abc426_b

Problem Statement
You are given a string S of length at least 3 consisting of 
lowercase English letters.
S contains exactly two types of characters, and exactly 
one character is different from the others. Find that one character.

For example, if S is odd, report o.

Constraints
S is a string of length at least 3 and at most 10 consisting of lowercase English letters.
S contains exactly two types of characters, and exactly one character is different from the others.

Input
The input is given from Standard Input in the following format:
S

Output
Print the answer.
*/

void solve() {
    
}

int main(){
    opIO
    string s;
    cin >> s;
    sort(ALL(s));
    if (s[0] != s[1]) cout << s[0] << "\n";
    else cout << s[s.length()-1] << "\n";
    return 0;
}