#include <iostream>

using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        else{
            int l=maxDepth(root->left);
            int r=maxDepth(root->right);

            return (l>r ? l : r) + 1;
        }
    }
};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
