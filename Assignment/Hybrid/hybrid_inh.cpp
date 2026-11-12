#include <iostream>
#include <string>

using namespace std;

class Employee
{
    protected:
        string name;
        int age;

    public:
        void set_employee()
        {
            name = "John Kamau";
            age = 35;
        }

        void display_employee()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Technical: virtual public Employee
{
    protected:
        string technical_skill;
};

class Programmer: public Technical
{
    protected:
        enum type {frontend, backend};
        type specialization;

    public:
        void set_programmer()
        {
            specialization = backend;
            technical_skill = "Python, C++, Java";
        }

        void display_programmer()
        {
            if (specialization == frontend)
                cout << "Specialization: Frontend Developer" << endl;
            else
                cout << "Specialization: Backend Developer" << endl;

            cout << "Technical Skills: " << technical_skill << endl;
        }
};

class Management: virtual public Employee
{
    protected:
        string department;

    public:
        void set_department()
        {
            department = "Technology";
        }
};

class Director: public Management
{
    protected:
        int years_of_experience;

    public:
        void set_director()
        {
            years_of_experience = 12;
        }
};

class Technical_Director: public Programmer, public Director
{
    public:
        void display_details()
        {
            cout << "\nTECHNICAL DIRECTOR DETAILS:\n";

            display_employee();
            display_programmer();

            cout << "Department: " << department << endl;
            cout << "Years of Experience: " << years_of_experience << endl;
        }
};

int main()
{
    Technical_Director td;

    td.set_employee();
    td.set_programmer();
    td.set_department();
    td.set_director();

    td.display_details();

    return 0;
}