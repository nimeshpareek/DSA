// root left right
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

void print_preorder(treenode *root){
  if (root == NULL)
  {
      return;
  }
  cout << root ->data << " ";
  print_preorder(root -> left);
  print_preorder(root -> right);
  
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
print_preorder(root);
return 0;
}