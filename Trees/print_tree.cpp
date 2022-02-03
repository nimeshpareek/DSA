#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

struct treenode{
    int data;
    treenode *left;
    treenode *right;

    treenode(int x){
    data = x;
    left = right = NULL;
    }
};

void print_tree(treenode *root){
treenode *temp = root;
if (temp == NULL)
{
    return;
}

cout << temp-> data << " ";
print_tree(temp -> left);
print_tree(temp-> right);
}
int main()
{

treenode *root = new treenode(1);
// treenode *leftnode = new treenode(2);
// treenode *rightnode = new treenode(3);  
root -> left = new treenode(2);
root -> left ->left = new treenode(3);
root -> right = new treenode(4);
root -> right -> right= new treenode(5);
// leftnode -> left = new treenode(4);
// leftnode -> right =  new treenode(5);
// rightnode -> left = new treenode(6);
// rightnode -> left = new treenode(7);

print_tree(root);
return 0;
}