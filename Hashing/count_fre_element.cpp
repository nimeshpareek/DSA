// //NAIVE SOLUTION

// #include<iostream>
// using namespace std;

// void frequency(int arr[],int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         bool flag = false;
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[i]==arr[j])
//             {
//                 flag = true;
//                  break;
            
//             }
           
            
//         }
//         if (flag == true)
//         {
//             continue;
//         }
//         int freq=1;
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[i]==arr[j])
//             {
//                 freq++;
//             }
            
//         }
//         cout << "frequency of " << arr[i] << " is: " << freq << endl;
        
        
        
//     }
    
// }
// int main()
// {
// int arr[5]={10,20,20,30,10};
// frequency(arr,5);
// return 0;
// }

#include<iostream>
using namespace std;
int main()
{
   
int arr[5]={10,20,10,20,30};
int n=5;
for (int i = 0; i < n; i++)
{
    bool flag = false;

    for (int j = 0; j < i; j++)
    {
        if (arr[i]==arr[j])
        {
            flag=true;
            break;
        }
        
    }
    if (flag==false)
    {
        int count=0;
        for (int j = i; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
            
        }
        cout << arr[i] << ":" << count << endl;
        
    }
    
    
}

return 0;
}