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
    data =x;
    next =NULL;
}
};
void printlist(node* head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    
}
node* insert(int data, node* head)
{
    node *temp1;
    cout << " enter Node to be inserted: " << endl;
    cin >> data;
    temp1 =  new node(data);
    temp1 -> next = head;;
    return temp1;

    
}
int main()
{
    int data;
node *head;
   head = new node(10);
   head -> next  =  new node(20);
   head -> next -> next = new node(30);
   head -> next -> next -> next = new node(40);

   printlist(head);
   node* new_print = insert(data,head);

    printlist(new_print);

return 0;
}