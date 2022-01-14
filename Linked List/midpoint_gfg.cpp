// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

// } Driver Code Ends
/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution
{
public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int lenghtcount(Node *head)
    {
        Node *temp = head;
        int l = 0;
        while (temp != NULL)
        {
            l++;
            temp = temp->next;
        }
        return l;
    }

    int getMiddle(Node *head)
    {
        int length = lenghtcount(head);
        int mid = (length - 1) / 2;
        int count = 0;
        int store_data;
        Node *temp = head;
        if (temp == NULL)
        {
            return -1;
        }
        while (temp != NULL)
        {
            if (count == mid)
            {
                store_data = temp->data;
                return store_data;
            }
            temp = temp->next;
            count++;
        }
        return -1;
    }
};

// { Driver Code Starts.

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N - 1; ++i)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        cout << ob.getMiddle(head) << endl;
    }
    return 0;
}
// } Driver Code Ends