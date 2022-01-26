#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

class queue{
   int capacity;
   int firstIndex;
   int nextIndex;
   int size;
   int *arr;
 public:
   queue(int x){
       arr = new int(x);
       capacity = x;
       firstIndex = -1;
       nextIndex = 0;
       size = 0;
   }
   
   void enqueue(int y){
       
      if (size == capacity)
      {
          cout << "Queue is full" << endl;
          return;
      }
       arr[nextIndex] = y;
       cout << "Now your pushed value is: " << arr[nextIndex]  << endl; 
       nextIndex = (nextIndex+1) % capacity;
        if (firstIndex == -1)
       {
           firstIndex = 0;
       }
       size++;
   }
bool isempty(){
    return size == 0;
}

int front(){
    if (isempty())
    {
        cout << "Queue is empty: " <<endl;
        return 0;
    }
    return arr[firstIndex];
    
}
   void dequeue(){
       if (isempty())
       {
           cout << "Queue is empty: " << endl;
           return;
       }
       cout << "The popped value is: " << arr[firstIndex] << endl;       
       firstIndex = (firstIndex+1) % capacity;
       size--;
   }

};
int main()
{
queue q1(5);
q1.dequeue();
q1.enqueue(1);
q1.enqueue(2);
q1.enqueue(3);
q1.enqueue(4);
q1.enqueue(5);
cout << q1.front() << endl;
q1.enqueue(6);
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.dequeue();

return 0;
}