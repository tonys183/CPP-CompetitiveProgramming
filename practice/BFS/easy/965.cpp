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
Univalued Binary Tree
https://leetcode.com/problems/univalued-binary-tree/

A binary tree is uni-valued if every node in the tree has the same value.
Given the root of a binary tree, return true if the given tree is uni-valued, or false otherwise.
*/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isUnivalTreeAux(TreeNode* root, int val) {
    if (!root) return true;
    if (root->val != val) return false;
    return isUnivalTreeAux(root->left, val) && isUnivalTreeAux(root->right, val); 
}

bool isUnivalTree(TreeNode* root) {
    if (!root) return true;
    return isUnivalTreeAux(root, root->val);
}

int main(){
    opIO
    TreeNode* root = new TreeNode(1);

root->left = new TreeNode(1);
root->right = new TreeNode(1);

root->left->left = new TreeNode(1);
root->left->right = new TreeNode(1);

root->right->right = new TreeNode(1);

    truefalse(isUnivalTree(root));
    return 0;
}
