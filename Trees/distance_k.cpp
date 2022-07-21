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

void dist(node *root, int k)
{
    if(root == NULL)
    {
        return;
    }
    if(k == 0)
    {
        cout << root -> data << " ";
        return;
       // this return is putted by me bczz if we traverse to the tree and we have 
       // k == 0 then it will print data but then also k is going to decrease
       // let's assume tree height is 20 and we have to print k == 2 then after
       // printing k tree will traverse till root == null and this makes no sense
       // so if we put return here when k value is printed out tree will return 
    }
    else
    {
        dist((root -> left), k-1);
        dist((root -> right), k-1);     
    }
}


int main()
{
node *root = new node(10);
root -> left = new node(20);
root -> left -> left =  new node(40);
root -> left -> right = new node(50);

root -> right =  new node(30);
root -> right -> right =  new node(70);

int k;
cout << " enter k : ";
cin >> k;

dist(root,k);

return 0;
}