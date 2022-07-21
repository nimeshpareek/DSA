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

int size_bt(node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        return size_bt(root -> left)+ size_bt(root -> right) + 1;
    }
}
int main()
{
node *root = new node(10);
root -> left = new node(20);
root -> right =  new node(30);
root -> left -> left = new node(40);
root -> right -> right = new node(50);

int x = size_bt(root);
cout << x << endl;

return 0;
}