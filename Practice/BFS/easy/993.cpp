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
Cousins in Binary Tree
https://leetcode.com/problems/cousins-in-binary-tree/

Given the root of a binary tree with unique values and the values of two different nodes of the tree x and y, 
return true if the nodes corresponding to the values x and y in the tree are cousins, or false otherwise.

Two nodes of a binary tree are cousins if they have the same depth with different parents.
Note that in a binary tree, the root node is at the depth 0, and children of each depth k node are at the depth k + 1.
*/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isCousins(TreeNode* root, int x, int y) {
    if (!root) return false;
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int s = q.size();
        int sX=0, sY=0;

        for(int i=0; i<s; i++){
            TreeNode* node = q.front(); q.pop();
            if (node->left) {
                if (node->left->val == x) sX = 1;
                else if (node->left->val == y) sY = 1;
                q.push(node->left);
            }
            if (node->right) {
                if (node->right->val == x) sX = 1;
                else if (node->right->val == y) sY = 1;
                q.push(node->right);
            }
            if (node->left && node->right){
                if ((node->left->val == x && node->right->val == y) || (node->left->val == y && node->right->val == x)) return false;
            }
        }
        if (sX && sY) return true;
    }
    return false;
}

int main(){
    opIO
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->right = new TreeNode(4);

    truefalse(isCousins(root, 2, 3));
    return 0;
}
