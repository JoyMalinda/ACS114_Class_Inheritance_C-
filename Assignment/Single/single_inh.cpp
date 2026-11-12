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
};

class AEK_Athens: public Team
{
    public:
    void set_details()
    {
        name = "AEK Athens";
        city = "Athens";
        country = "Greece";
        motto = "Only the brave live on in eternal glory.";
        colors = {"Yellow", "Black"} ;
    }

    void display_details()
    {
        cout << name << " is a football team from " << city << "," << country << endl;
        cout << "It's motto is " << motto << endl;
        cout << "It's colors are " << colors[0] << " and " << colors[1] << endl;
    }
};

int main()
{
    AEK_Athens athens;
    athens.set_details();
    athens.display_details();
}
