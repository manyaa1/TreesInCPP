/*

Design a recursive algorithm to build a binary tree given its pre-order traversal.

eg: preOrder : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1

*/
#include<iostream>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val= val;
        this->left=this->right = NULL;
    }
};
void printPreOrder(TreeNode* root){

    //base case
    if(root== NULL){
        cout<<"-1";
        return;
    }
    //recursive cases
    //NLR

    //1.Process the root node
     cout<<root->val<<" ";

    //2.Traverse the left subtree recursively
    printPreOrder(root->left);

    //3. traverse the right subtree recursively 
    printPreOrder(root->right);
}
TreeNode* buildTree( ){
    int data;
    cin>>data;

    if( data ==-1){
        TreeNode* root =NULL;
        return root;
    }
    TreeNode* root = new TreeNode(data);

    //1.ask your friend to build the leftsubtree from its pre-order traversal

    root->left = buildTree();

    root->right = buildTree();

    return root;

}
int main(){

    TreeNode* root =NULL;

    root= buildTree();

    printPreOrder(root);

    cout<<endl;
    return 0;
}
