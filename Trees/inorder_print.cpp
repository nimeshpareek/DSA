// inorder is left root right
// #include<iostream>
// #include<unordered_map>
// #include<unordered_set>
// using namespace std;

// struct treenode{
// int data;
// treenode *left;
// treenode *right;

// treenode(int data){
//    this-> data = data;
//    left = right = NULL;
// }
// };

// void print_inorder(treenode *root){
//   if (root == NULL)
//   {
//       return;
//   }
//   print_inorder(root -> left);
//   cout << root ->data << " ";
//   print_inorder(root -> right);
  
// }


// int main()
// {
// treenode *root = new treenode(10);
// root -> left = new treenode(20);
// root -> left -> left = new treenode(40);
// root -> left -> right = new treenode(50);
// root -> left -> right -> left = new treenode(70);
// root -> left -> right -> right = new treenode(80);
// root -> right = new treenode(30);
// root -> right -> right = new treenode(60);
// print_inorder(root);
// return 0;
// }



#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

struct node{
  int data;
  node *left;
  node *right;

  node(int x)
  {
    data = x;
    left = right = NULL;
  }
  
};

void inorder(node *root)
{

  if(root == NULL)
  {
    return;
  }
  inorder(root -> left);
  cout << root -> data << " ";
  inorder(root -> right);

}
int main()
{

node *root = new node(30);
root -> left = new node(10);
root -> left -> left = new node(5);

root -> right = new node(40);
root -> right -> right = new node(50);

inorder(root);

// as it is inorder then it is left root right
// output must be 5 10 30 40 50
return 0;
}