// wronng ans check children_sum2
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

void child(node *root)
{
    if(root == NULL)
    {
        return;
    }

    queue<node*>q;
    q.push(root);

    while (q.empty() == false)
    {
        node *curr = root;
        q.pop();
        if((curr -> data) == (curr -> left -> data) + (curr -> right -> data))
        {
            q.push(curr -> left);
            q.push(curr -> right);
            cout << "Yes";
        }
        else
        {
            return;
        }
    }

}


int main()
{
node *root = new node(10);
root -> left = new node(20);
root -> right =  new node(30);
root -> left -> left = new node(40);
root -> right -> right = new node(50);

child(root);
return 0;
}