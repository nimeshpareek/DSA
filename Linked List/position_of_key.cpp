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
int position_key(node *head, int key)
{
    node* temp = head;
    int position_1 = 1;
    while (temp != NULL)
    {
         if (temp -> data == key)
         {
             return position_1;
         }  
         else
         {
             position_1++;
             temp = temp -> next;
         }
    }
    return -1;
}
int main()
{
 int data;
    node *head;
    head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    int key = 30;
cout << position_key(head,key);


return 0;
}