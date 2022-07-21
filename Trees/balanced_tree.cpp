#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

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

bool isbalanced(node *root)
{
    if (root == NULL)
    {
        return true;
    }
    
    int lh = isbalanced(root -> left);
    int rh = isbalanced(root -> right);

    return (abs(lh - rh) <= 1 && isbalanced(root -> left) && isbalanced(root -> right));

}

int main()
{
    node *root = new node(10);
root -> left = new node(20);
root -> right =  new node(30);
root -> left -> left = new node(40);
root -> right -> right = new node(50);
// root -> right -> right -> right -> right = new node(50);

int x = isbalanced(root);
cout << x;
return 0;
}