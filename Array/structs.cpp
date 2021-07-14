#include<iostream>
using namespace std;
struct student{
int age;
string first_name;
string second_name;
int standard;

};
int main()
{
    student n1;
    cin >> n1.age >> n1.first_name >> n1.second_name >> n1.standard;
     cout << n1.age <<" "<< n1.first_name <<" "<< n1.second_name <<" "<< n1.standard;

return 0;
}
