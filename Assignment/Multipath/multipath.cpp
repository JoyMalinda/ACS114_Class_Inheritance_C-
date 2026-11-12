#include <iostream>
#include <string>

using namespace std;

class Musician
{
    protected:
    string name;
    string nationality;
};

class Rapper : virtual public Musician
{
    protected:
    string rap_style;
};

class Singer : virtual public Musician
{
    protected:
    string vocal_range;
};

class Drake : public Rapper, public Singer
{
    public:
    void set_details()
    {
        name = "Drake";
        nationality = "Canadian";
        rap_style = "Hip-Hop";
        vocal_range = "Tenor";
    }

    void display_details()
    {
        cout << "Name: " << name << endl;
        cout << "Nationality: " << nationality << endl;
        cout << "Rap Style: " << rap_style << endl;
        cout << "Vocal Range: " << vocal_range << endl;
    }
};

int main()
{
    Drake artist;

    artist.set_details();
    artist.display_details();

    return 0;
} 