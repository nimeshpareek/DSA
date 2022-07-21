#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int maxlevel = 0;
struct node
{
    int data;
    node *left;
    node *right;

    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};


void printleft(node *root, int level)
{
    if(root == NULL) { return; }

    if(maxlevel < level)
    {
        cout << root -> data << " ";
        maxlevel = level;
    }

    printleft(root -> left, level + 1);
    printleft(root -> right, level + 1);
}
int main()
{
node *root = new node(10);
root -> left = new node(20);
root -> right =  new node(30);
root -> left -> left = new node(40);
root -> right -> right = new node(50);


printleft(root, 1);
return 0;
}