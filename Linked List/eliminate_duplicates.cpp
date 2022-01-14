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
	Node *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
			// OR
			// tail = tail -> newnode;
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
Node *removeduplicates(Node *head)
{
    Node *current = head;
    while (current -> next != NULL)
    {
        if (current -> data == current->next->data)
        {
            current -> next = current -> next -> next;

        //     next = current->next->next;
        // free(current->next);
        // current->next = next; 
        //  if u wanted to deallocate memory then use this commented code 
        // with Node *next;
        }
        else
        {
            current = current -> next;
        }
        
    }
    return head;
}

int main()
{
	Node *head = Takeinput();
	print(head);
    cout << endl;
    Node *newhead = removeduplicates(head);
    print(newhead); 
	

	return 0;
}