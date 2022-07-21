// took some max help while rev
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

int height(node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    if(root -> left == NULL && root -> right == NULL)
    {
        return 0;
    }
    return max(height(root -> left), height(root -> right) + 1);
   // return max(height(root -> left), height(root -> right) + 1);

}
int main()
{
node *root = new node(10);
root -> left = new node(20);
root -> right = new node(30);

root -> left -> left = new node(40);
root -> right -> right = new node(50);
root -> right -> right -> right = new node(60);

int x = height(root);
cout << x;


return 0;
}