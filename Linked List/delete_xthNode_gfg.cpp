#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#include "Node.cpp"

Node *take_input()
{
    // we have to deallocate the dynamic data so just write delete "the address of the data to be deleted";
    int data;
    cin >> data;
    Node *head = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cin >> data;
    }
    return head;
}

// Node *insert_node(Node *head, int i, int data) // when we wants to return  head then only we use Node * otherwise we can use void
// {

//     Node *newnode = new Node(data);
//     int count = 0;
//     Node *temp = head;

//     if (i == 0) // this condition is for when we wants to insert something at i = 0, for this we have to update head also;
//     {
//         newnode -> next = head;
//         head =  newnode;
//         return head;
//     }

//     while (temp != NULL && count < i-2)
//     {
//         temp = temp -> next;
//         count++;
//     }
//     if (temp != NULL)
//     {
//     Node *a = temp -> next;
//     temp -> next = newnode;
//     newnode -> next = a;
//     }
//  return head;
//}

Node *delete_node(Node *head, int i)
{
    int count = 1;
    Node *temp = head;
    if (i==1)
    {
        return head -> next;
    }
    
    while (temp != NULL)
    {
        
        if (count == i-1 )
        {
           temp -> next =  temp -> next -> next;
        }
        temp = temp->next;
        count++;
    }

    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = take_input();
    print(head);
    int i;
    //  int data;
    cin >> i;
    // cin >> data;
    // head  = insert_node(head,i,data);
    //print(head);

    Node *new_list = delete_node(head, i);

    print(new_list);

    return 0;
}