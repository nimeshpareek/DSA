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

void printlist(node *head)
{
    if(head == NULL)
    {
        return;
    }
    else
    {
      cout << head -> data << " ";
      printlist(head -> next);
    }
    
    
}
int main()
{
   node *head;
   head = new node(10);
   head -> next  =  new node(20);
   head -> next -> next = new node(30);
   head -> next -> next -> next = new node(40);
   printlist(head);
return 0;
}