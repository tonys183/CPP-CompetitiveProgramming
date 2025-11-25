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
typedef unordered_map<int, int> unii;

/*
https://codeforces.com/contest/2132/problem/A?locale=en

Vlad and Dima have been assigned a task in school for their English class. They were given two strings a and b
and asked to append all characters from b to string a in any order. The guys decided to divide the work between 
themselves and, after lengthy negotiations, determined who would add each character from string b to a.

Due to his peculiarities, Vlad can only add characters to the beginning of the word, while Dima can only add 
them to the end. They add characters in the order they appear in string b. 
Your task is to determine what string Vlad and Dima will end up with.

Input
Each test consists of several test cases. The first line contains a single integer 
t (1 ≤ t ≤ 1000) — the number of test cases. The description of the test cases follows.

The first line contains an integer n (1 ≤ n ≤ 10) — the length of the string a.

The second line contains the string a, consisting of lowercase letters of the English alphabet.

The third line contains an integer m (1 ≤ m ≤ 10) — the length of the strings b and c.

The fourth line contains the string b, consisting of lowercase letters of the English alphabet.

The fifth line contains the string c, consisting of the characters 'V' and 'D',
the distribution of the characters of string b between Dima and Vlad. 
If ci = 'V', then the i-th letter is added by Vlad; otherwise, it is added by Dima.

Output
For each test case, output the string that will result from Dima and Vlad's work.
*/

void solve() {
    int n, m;
    string a, b, c;
    cin >> n >> a >> m >> b >> c;
    string s = a;
    for (int i=0; i<m; i++) {
        if (c[i] == 'V') s = b[i] + s;
        else s += b[i];
    }
    cout << s << "\n";
}

int main() {
    opIO
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}