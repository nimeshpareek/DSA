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

void printleft(node *root)
{
    if(root == NULL) {return;}
    queue<node*>q;
    q.push(root);   

    while (q.empty() == false)
    {
        int count = q.size();
       // cout << "queue size is : " << count << endl;
        for (int i = 0; i < count; i++)
        {
           // cout << "I'm inside loop i = " << i << endl;
            node *curr = q.front();
            q.pop();
            if(i == 0)
            {
                cout << curr -> data << " ";
            }
            if (curr->left != NULL)
            {
                q.push(curr -> left);
            }

            if(curr -> right != NULL)
            {
                q.push(curr -> right);
            }
            
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

printleft(root);
return 0;
}