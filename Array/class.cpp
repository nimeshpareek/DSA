#include <iostream>
using namespace std;
class student
{
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    void get_age(void)
    {
        cin >> age;
    }
    void set_age(void)
    {
        cout << age;
    }
    void get_first_name(void)
    {
        cin >> first_name;
    }
    void set_first_name(void)
    {
        cout << first_name;
    }
    void get_last_name(void)
    {
        cin >> last_name;
    }
    void set_last_name(void)
    {
        cout << last_name;
    }
    void get_standard(void)
    {
        cin >> standard;
    }
    void set_standard(void)
    {
        cout << standard;
    }
};
int main()
{
    student n1;

    n1.get_age();
    n1.get_first_name();
    n1.get_last_name();
    n1.get_standard();

    n1.set_age();
    cout << endl;
    n1.set_last_name();
    cout << ","
         << " ";
    
     n1.set_first_name();
    cout << endl;
    n1.set_standard();
    cout << endl;
    cout << endl;

    n1.set_age();
    cout << ",";
    n1.set_first_name();
    cout << ",";
    n1.set_last_name();
    cout << ",";
    n1.set_standard();
    return 0;
}
