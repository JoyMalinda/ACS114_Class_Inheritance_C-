#include <iostream>
#include <string>

using namespace std;

class University
{
    public:

    char name[20];
    char loc[20];
    char address[20];
    long int telephone;
    char county[20];
    void getname()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << name << endl;

        cout << " ----------------- \n";
        
        cout << "\nEnter location: ";
        cin >> loc;
        cout << loc << endl;

        cout << " ----------------- \n";
        
        cout << "\nEnter address: ";
        cin >> address;
        cout << address << endl;

        cout << " ----------------- \n";
        
        cout << "\nEnter telephone number: ";
        cin >> telephone;
        cout << telephone << endl;

        cout << "----------------- \n";
        
        cout << "\nEnter County: ";
        cin >> county;
        cout << county << endl;
    }

};

class Student : public University
{
    public:

    char name[20];
    char hostel[20];
    long int fee_balance;
    long int telephone;
    char county[20];
    void getData()
    {
        cout << "\nEnter name: ";
        cin >> name;
        cout << name << endl;

        cout << " ----------------- \n";
        
        cout << "\nEnter hostel: ";
        cin >> hostel;
        cout << hostel << endl;

        cout << " ----------------- \n";
        
        cout << "\nEnter fee balance: ";
        cin >> fee_balance;
        cout << fee_balance << endl;

        cout << " ----------------- \n";
        
        cout << "\nEnter telephone number: ";
        cin >> telephone;
        cout << telephone << endl;

        cout << "----------------- \n";
        
        cout << "\nEnter County: ";
        cin >> county;
        cout << county << endl;

        cout << " ----------------- \n";
    }

};


int main()
{
    University campus;
    campus.getname();

    Student s;
    s.getData();
    return 0;
}