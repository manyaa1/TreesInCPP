#include<iostream>
using namespace std;

// Tree is a non-linear data structure . In which each node can  have as many childern . Each node should have a pointer to its child nodes
// Whereas, in Binary Tree , each node can have at MOST two childern
// Searching techniques in tree are Breadth First Search(BFS) and Depth First Search(DFS)
// Depth First search :  techniques are mainly of three types In-Order(LNR), Pre-Order(NLR) and Post-Order(LRN)
//L-Left, R-Right, N-Node

//output :
//10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1(pre)
//-1 40 -1 20 -1 70 -1 50 -1 10 -1 30 -1 60 -1(inorder)
//-1 -1 40 -1 -1 70 -1 50 20 -1 -1 -1 60 30 10 (post)

class TreeNode{
    public:
    
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;

    }

};
void printPreOrder(TreeNode* root){
    //base case

    if(root==NULL){
        cout<<-1<<" ";
        return;
    }

    //recursive case

    //1.process the root node

    cout<<root->val<<" ";

    //2.recursively , do the preorder travel of the left subtree

    printPreOrder(root->left);

    //3.recursively , do the preorder travel of the right subtree

    printPreOrder( root->right);
    
}
void printInOrder(TreeNode* root){
    
    //base case
    if(root==NULL){
        cout<<-1<<" ";
        return ;
    }

    //recursively traverse the tree
    
    //1.Print the inorder traversal of left subtree

    printInOrder(root->left);

    //2.process the node
    cout<<root->val<<" ";
   

  //3.Print the inorder traversal of right subtree
    printInOrder(root->right);


}
void  printPostOrder(TreeNode* root){
    //base case
    if(root==NULL){
        cout<<-1<<" ";
    }

    //recursive traversal of the tree

    //1. Recursively , do the postorder traversal of the left sub-tree tree
     
    printPostOrder(root->left);

    //2. Recursively , do the postorder traversal of the right sub-tree tree

    printPostOrder(root->right);

    //3. Process the node

    cout<<root->val<<" ";

    
    



}
int main(){
    TreeNode* root =NULL;

    root=new TreeNode(10);
    root->left= new TreeNode(20);
    root->right=new TreeNode(30);
    root->left->left= new TreeNode(40);
    root->right->right= new TreeNode(60);
    root->left->right= new TreeNode(50);
    root->left->right->left= new TreeNode(70);

    printPreOrder(root);
    cout<<endl;

    printInOrder(root);
    cout<<endl;

    printPostOrder(root);


}
