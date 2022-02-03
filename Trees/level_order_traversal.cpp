#include<bits/stdc++.h>
using namespace std;

struct treenode
{
    int data;
    treenode *left;
    treenode *right;

    treenode(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// void print_level(treenode *root){
//     if (root == NULL)
//     {
//         return;
//     }
//     queue<treenode*>q;
//     q.push(root);
//     while (q.empty() == false)
//     {
//         treenode *curr = q.front();
//         q.pop();
//         cout << curr -> data << " ";
//         if (curr -> left != NULL)
//         {
//             q.push(curr -> left);
//         }
//         if (curr -> right != NULL)
//         {
//             q.push(curr -> right);
//         }
        
//     }
    
    
// }

// trying to code it on my own
void print_level(treenode* root){
    if (root == NULL)
    {
        return;
    }
    queue<treenode*> q;
    q.push(root);
    while (q.empty() == false)
    {
        treenode *curr = q.front();
        q.pop();
        cout << curr-> data << " ";
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
    treenode *root = new treenode(10);
    root->left = new treenode(20);
    root->left->left = new treenode(40);
    root->left->right = new treenode(50);
    root->left->right->left = new treenode(70);
    root->left->right->right = new treenode(80);
    root->right = new treenode(30);
    root->right->right = new treenode(60);
    print_level(root);
    return 0;
}