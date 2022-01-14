#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

struct node
{
    int data;
    node* next;
    
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

node* traversal(node* head)
{
   while (head != NULL)
   {
       node *temp = head;
      cout << temp -> data;
      head = temp -> next;
   }
   return head;
}
int main()
{
node *head;
head = new node(1);
head -> next = new node(2);
head -> next -> next = new node(3);
traversal(head);

return 0;
}