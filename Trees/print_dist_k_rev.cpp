// did at first time while rev
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

struct node
{
    node *left;
    node *right;
    int data;

    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void print(node *root, int k)
{
    if(root == NULL)
    {
        return;
    }

    if (k == 0)
    {
        cout << root -> data << " ";
    }
    
    if(root -> left == NULL && root -> right == NULL)
    {
        return;
    }

    return (print(root -> left, k-1), print(root -> right, k-1));
}


int main()
{
node *root = new node(10);
root -> left = new node(20);
root -> right = new node(30);

root -> left -> left = new node(40);
root -> right -> right = new node(50);
root -> right -> right -> right = new node(60);

int k;
cout << "Enter distance at which you want to print your node : ";
cin >> k;

print(root, k);
return 0;
}