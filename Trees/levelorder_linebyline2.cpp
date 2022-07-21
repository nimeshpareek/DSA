#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;

struct node
{
    int data;
    node *right;
    node *left;

    node(int x)
    {
        data = x;
        right = left = NULL;
    }
};

void lvl_trav(node *root)
{
    if(root == NULL)
    {
        return;
    }
    queue<node*>q;
    q.push(root);

    while (q.empty() == false)
    {
        int count = q.size();

        for(int i = 0; i < count; i++)
        {   
            node *curr = q.front();
            q.pop();

            cout << curr -> data << " ";

            if(curr -> left != NULL)
            {
                q.push(curr -> left);
            }

            if (curr -> right != NULL)
            {
                q.push(curr -> right);
            }
            
        }
        cout << endl;
        
    }
    
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

    lvl_trav(root);


return 0;
}