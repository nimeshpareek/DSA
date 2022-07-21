#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

struct Node{
    int data;
    Node *right;
    Node *left;

    Node(int x){
        data = x;
        right = left = NULL;
    }
};
int main()
{
Node *root = new Node(10);
root -> left = new Node(20);
root -> right = new Node(30);
root -> left -> left = new Node(40);

return 0;
}