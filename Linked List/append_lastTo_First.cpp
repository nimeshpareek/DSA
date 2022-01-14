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
int lenghtcount(Node *head)
{
	Node *temp = head;
	int l=0;
	while (temp != NULL)
	{
		l++;
		temp = temp-> next;
	}
	return l;
}
// Node *rotate(Node *head, int n)
// {
// 	Node *newhead;
// 	Node *newtail;
// 	Node *tail = head;

//     int length = lenghtcount(head);
//     int count =1;
// 	while (tail -> next != NULL)
// 	{
// 		if (count == length-n)
// 		{
// 			newtail = tail;
// 		}
// 		if (count== ((length-n)+1))
// 		{
// 			newhead =  tail;
// 		}
		
// 		tail = tail ->next;
// 		count++;
// 	}
// 	newtail -> next =  NULL;
// 	tail -> next =  head;

// 	return newhead;
// 	// use void type and do not return anything in function and call print(newhead); 
// 	// if u wanna tu call within function
	
// }

Node *rotate(Node *head,int n)
// same as above just tried it again
{
	int length =  lenghtcount(head);
	int count = 1;
	Node *newhead;
	Node *newtail;
	Node *tail = head;
	while (tail -> next != NULL )
	{
		if (count == length-n)
		{
			newtail = tail;
		}
		
		if(count ==  (length - n) + 1)
		{
			newhead =  tail;
		}
		count++;
		tail = tail -> next;
	}
	tail -> next = head;
	newtail -> next = NULL;
	

	return newhead;
	
}
int main()
{
	Node *head = Takeinput();
	print(head);
	int n;
	cin >> n;
	Node *newhead = rotate(head,n);
	print(newhead);
    //rotate(head,n);

	return 0;
}