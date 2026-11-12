#include <iostream>
#include <string>
#include <array>

using namespace std;

class Team 
{
protected:
    string name;
    string motto;
    string country;
    string city;
    array<string, 2> colors;

    friend void set_details(Team& t);
};

class AEK_Athens : public Team
{
public:
    void display_details()
    {
        cout << name << " is a football team from " << city << ", " << country << "." << endl;
        cout << "Its motto is: \"" << motto << "\"" << endl;
        cout << "Its colors are " << colors[0] << " and " << colors[1] << "." << endl;
    }
};

void set_details(Team& t)
{
    t.name = "AEK Athens";
    t.city = "Athens";
    t.country = "Greece";
    t.motto = "Only the brave live on in eternal glory.";
    t.colors = {"Yellow", "Black"}; 
}

int main()
{
    AEK_Athens athens;
    
    set_details(athens); 
    
    athens.display_details();
    return 0;
}