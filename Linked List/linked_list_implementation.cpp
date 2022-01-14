#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
struct node
{
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

int main()
{
// node *head = new node(1);
// node *temp1 = new node(2);
// node *temp2 = new node(3);

node *head,*temp1,*temp2;
head = new node(1);
temp1 = new node(2);
temp2 = new node(3);

head -> next = temp1;
temp1 -> next = temp2;

cout << head ->data <<  " " << temp1 ->data << " " << temp2 ->data; 
return 0;
}