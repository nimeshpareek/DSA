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

int size_oftree(node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    
    queue<node*>q;
    q.push(root);
    int count =1;
    while (q.empty() == false)
    {
        node *curr = q.front();
        q.pop();
        count++;

        if(curr -> left != NULL)
        {
            q.push(curr -> left);
        }

        if(curr -> right != NULL)
        {
            q.push(curr -> right);
        }
    }
    return count;
}

int main()
{
    node *root = new node(10);
    root -> left = new node(20);
    root -> right = new node(30);

    root -> left -> left = new node(40);
    root -> left -> right = new node(50);

    root -> right -> left = new node(60);
    root -> right -> left = new node(70);

    int x = size_oftree(root);
    cout << " your size is : " << x;
return 0;
}