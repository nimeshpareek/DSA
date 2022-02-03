#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

struct treenode{
int data;
treenode *left;
treenode *right;

treenode(int data){
   this-> data = data;
   left = right = NULL;
}
};

void print_inorder(treenode *root){
  if (root == NULL)
  {
      return;
  }
  print_inorder(root -> left);
  cout << root ->data << " ";
  print_inorder(root -> right);
  
}


int main()
{
treenode *root = new treenode(10);
root -> left = new treenode(20);
root -> left -> left = new treenode(40);
root -> left -> right = new treenode(50);
root -> left -> right -> left = new treenode(70);
root -> left -> right -> right = new treenode(80);
root -> right = new treenode(30);
root -> right -> right = new treenode(60);
print_inorder(root);
return 0;
}