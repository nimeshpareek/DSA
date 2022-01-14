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

Node *reverse_list(Node *head)
{
	Node *current = head;
	Node *next;
	Node *prev = NULL;
	while (current != NULL)
	{
		next = current -> next;
	    current -> next  = prev;
		prev =  current;
		current  = next;
		
	}
	return prev;
	
}



int main()
{
	Node *head = Takeinput();
	
     cout <<"Done till here : " << endl;
	 Node *newhead = reverse_list(head);
	 print(newhead);

	return 0;
}