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
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long int ll;
typedef unordered_map<int, int> unii;

/*
Minimum Absolute Difference in BST
https://leetcode.com/problems/minimum-absolute-difference-in-bst/

Given the root of a Binary Search Tree (BST), return the minimum absolute 
difference between the values of any two different nodes in the tree.
*/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int getMinimumDifferenceAux(TreeNode* root, int& mini, int& preVal){
    if (!root) return 0;
    getMinimumDifferenceAux(root->left, mini, preVal);
    if (preVal != -1) mini = min(mini, root->val - preVal);
    preVal = root->val;
    getMinimumDifferenceAux(root->right, mini, preVal);
    return mini;
}

int getMinimumDifference(TreeNode* root) {
    int mini = INT_MAX;
    int preVal = -1;
    return getMinimumDifferenceAux(root, mini, preVal);
}

int main(){
    opIO
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(0);
    root->right = new TreeNode(48);

    root->right->left = new TreeNode(12);
    root->right->right = new TreeNode(49);
    cout << getMinimumDifference(root) << "\n";
    return 0;
}
