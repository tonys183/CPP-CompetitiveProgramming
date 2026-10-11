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
typedef vector<double> vd;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
Average of Levels in Binary Tree
https://leetcode.com/problems/average-of-levels-in-binary-tree/

Given the root of a binary tree, return the average value of the nodes on each level in 
the form of an array. Answers within 10-5 of the actual answer will be accepted.
*/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vd averageOfLevels(TreeNode* root) {
    if (!root) return {0.0};

    queue<TreeNode*> q; q.push(root);
    vd res;

    while (!q.empty()){
        int s = q.size();
        double avg = 0.0;

        for (int i=0; i<s; i++){
            TreeNode* node = q.front(); q.pop();
            if (node->left) q.push(node->left); 
            if (node->right) q.push(node->right);
            avg += node->val;
        }
        res.push_back(avg/s);
    }
    return res;
}

int main(){
    opIO
    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(9);
    root->right = new TreeNode(20);

    root->left->left = new TreeNode(15);
    root->left->right = new TreeNode(7);

    vd res = averageOfLevels(root);
    forr(i,0,res.size()) cout << res[i] << "\n";
    return 0;
}
