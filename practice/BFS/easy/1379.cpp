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
Find a Corresponding Node of a Binary Tree in a Clone of That Tree
https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/

Given two binary trees original and cloned and given a reference to a node target in the original tree.
The cloned tree is a copy of the original tree.

Return a reference to the same node in the cloned tree.
Note that you are not allowed to change any of the two trees or the target node and the answer must be a reference to a node in the cloned tree.
*/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
    if (!original) return nullptr;
    if (original == target) return cloned;
    TreeNode* left = getTargetCopy(original->left, cloned->left, target);
    if (left) return left;
    return getTargetCopy(original->right, cloned->right, target);
}

int main(){
    opIO
    TreeNode* original = new TreeNode(7);
    original->left = new TreeNode(4);
    original->right = new TreeNode(3);
    original->right->left = new TreeNode(6);
    original->right->right = new TreeNode(19);

    
    TreeNode* cloned = original;

    TreeNode* target = original->left;

    cout << getTargetCopy(original, cloned, target) << "\n";
    return 0;
}
