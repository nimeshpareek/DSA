// in this we have to find the sum of root is equal to it's left + right child
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

bool child(node *root)
{
    if(root == NULL)
    {
        return true;
    }

    if(root -> left == NULL && root -> right == NULL)
    {
        return true;
    }
    int sum = 0;
    if(root -> left != NULL)
    {
        sum += root -> left -> data;
    }

    if(root -> right != NULL)
    {
        sum += root -> right -> data;
    }

    return(sum == root->data && child(root -> left)&&child(root -> right));   
}
int main()
{
node *root = new node(6);
root -> left = new node(3);
root -> right = new node(3);

int x = child(root);
cout << x;

return 0;
}