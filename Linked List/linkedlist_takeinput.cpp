#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#include "Node.cpp"
Node *Takeinput()
{
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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *reverse_recursion(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *smallhead = reverse_recursion(head -> next);
    
//     Node *temp =  smallhead;
//     while (temp -> next != NULL)
//     {
    
// temp = temp -> next;
        
//     }
//         temp -> next = head;
//         head -> next = NULL;
    return smallhead;



    //    Node* newhead = reverse_recursion(head->next);
    //     head -> next -> next = head;
    //     head -> next = NULL;
    
    // return newhead;
}
int main()
{
    Node *head = Takeinput();
    print(head);
    Node *newhead1= reverse_recursion(head);
    cout << endl;
    print(newhead1);

    // cout << n1.data << " " <<  n2.data << endl;
    return 0;
}