// this one is not working idk....
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
        int data = x;
        left = right = NULL;
    }
};

int height_tree(node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    return max(height_tree(root -> left),height_tree(root -> right) + 1); 
}

void lvl_order(node *root, int k)
{
    if(root == NULL)
    {
        return;
    }
    if(k == 0)
    {
        cout <<  root -> data << " ";
    }
        lvl_order(root -> left, k-1);
        lvl_order(root -> right, k-1);
    
}
int main()
{
node *root = new node(10);
root -> left = new node(20);
root -> right =  new node(30);
root -> left -> left =  new node(40);
root -> right -> right = new node(50);
int k = height_tree(root);

for(int i=1; i<=k; i++)
{
    lvl_order(root, i);
}

return 0;
}