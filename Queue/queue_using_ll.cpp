#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;

    }
};
 class queue_list{
    Node *head;
    Node *tail;
    int size;

    public:
    queue_list(){
      head = NULL;
      tail = NULL;
      size = 0;
    }

    void enqueue(int y){
        Node *newnode = new Node(y);
        if (head == NULL)
        {
            head = newnode;
            tail =  newnode;
            size++;
            cout << "This is from if Your pushed value is: " << tail -> data << endl;
        }
        else
        {
            tail -> next =  newnode;
            tail =  tail -> next;
            size++;
             cout << "This is from else Your pushed value is: " << tail -> data << endl;
        
        }
    }
    
    int front(){
        if (head == NULL)
        {
            cout << "Your queue is empty " << endl;
            return 0;
        }
        else{
            return head -> data;
        }
    }
    void dequeue(){
       Node *temp = head;
       cout << "Your popped value is: " << temp -> data << endl;
       temp = temp -> next;
       delete(head);
       head = temp;
      

    }
 };

int main()
{
queue_list q1;
q1.enqueue(10);
 q1.dequeue();
q1.enqueue(45);
q1.enqueue(20);
q1.dequeue();
cout << "Your front is: " << q1.front() << endl;
return 0;
}