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

void line_trav(node *root)
{   
    if(root == NULL) return;
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(q.size() > 1)
    {
        node *curr = q.front();
        q.pop();

         if (curr == NULL)
        {
            cout << "\n";
            q.push(NULL);
            continue;  // this is for going to next iteration and not check left, right and printing NULL
        }
        
        
        cout << curr -> data << " "; // i tried to remove continue and pur a if block curr != NUll but that is 
        // only printing 10 over here
        if (curr -> left != NULL)
        {
            q.push(curr -> left);
        }
        
        if (curr -> right != NULL)
        {
            q.push(curr -> right);
        }  
    }
}
int main()
{
node *root = new node(10);
root -> left =  new node(20);
root -> right = new node(30);
root -> left -> left = new node(40);
root -> left -> right = new node(60);
root -> right -> left = new node(70);
root -> right -> right = new node(50); 

line_trav(root);
return 0;
}