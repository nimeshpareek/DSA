#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<climits>
using namespace std;
struct stackusingarray{
    int *arr;
    int capacity;
    int nextindex;

    stackusingarray(int totalsize){
    arr = new int[totalsize];
    int capacity = totalsize;
    nextindex = 0;
    }

    void push(int x){
        if (nextindex == capacity)
        {
            cout << "Your stack is overflow ((-_-)) " << endl;
            return;
        }
            
            arr[nextindex] = x;
            nextindex++;
    }

    int pop(){
        if (nextindex == 0)
        {
            cout << "Your stack is Empty ((-_-))" << endl;
            return INT_MIN;
        }
        else
        {
            nextindex--;
            return arr[nextindex];
        }
        
    }

    int top(){
         return arr[nextindex - 1];
        
    }

    int size(){
        return nextindex;
    }

    bool isempty(){
        return nextindex == 0;   // if index  = 0 this will return true(1) otherwise false(0)
    }
};



int main()
{
    stackusingarray s1(5);
  s1.push(10);
  s1.push(20);
  s1.push(30);
  s1.push(40);
  s1.push(50);
  s1.push(60);

  cout << "Top of stack is: " << s1.top() << endl;

  cout << "The popped value is: " << s1.pop() << endl;
  cout << "The popped value is: " << s1.pop() << endl;
  cout << "The popped value is: " << s1.pop() << endl;

  cout << "Top of stack is: " << s1.top() << endl;

  cout << "The popped value is: " << s1.pop() << endl;
  cout << "The popped value is: " << s1.pop() << endl;
  cout << "The popped value is: " << s1.pop() << endl;

  cout << "Top of stack is: " << s1.top() << endl;

return 0;
} 