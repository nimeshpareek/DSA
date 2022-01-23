#include <iostream>
#include <unordered_map> // this one is for practive onlu
#include <unordered_set>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class mystack
{
    Node *head;
    Node *tail;

public:
    mystack()
    {
        head = NULL;
        tail = NULL;
    }

    void push(int y)
    {
        Node *newnode = new Node(y);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            newnode->next = tail;
            tail = newnode;
        }
    }
    void pop()
    {
        Node *temp = tail;
        cout << "Your popped value is: " << tail->data;
        tail = tail->next;
        delete (tail);
    }

};   

    int main()
    {
        mystack s1;
    s1.push(5);
    s1.push(6);

    s1.pop();



        return 0;
    }