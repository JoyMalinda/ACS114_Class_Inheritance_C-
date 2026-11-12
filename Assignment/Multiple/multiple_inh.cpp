#include <iostream>
#include <string>

using namespace std;

class City
{
    protected:
        string city_name;
        string country;
        int population;

    public:
        void set_city()
        {
            city_name = "Barcelona";
            country = "Spain";
            population = 1620000;
        }

        void display_city()
        {
            cout << "City: " << city_name << endl;
            cout << "Country: " << country << endl;
            cout << "Population: " << population << endl;
        }
};

class Team
{
    protected:
        string team_name;
        string stadium;
        int year_founded;

    public:
        void set_team()
        {
            team_name = "FC Barcelona";
            stadium = "Spotify Camp Nou";
            year_founded = 1899;
        }

        void display_team()
        {
            cout << "Team: " << team_name << endl;
            cout << "Stadium: " << stadium << endl;
            cout << "Year Founded: " << year_founded << endl;
        }
};

class Barcelona: public City, public Team
{
    public:
        void display_details()
        {
            cout << "BARCELONA DETAILS:\n";

            display_city();

            cout << "\n";

            display_team();
        }
};

int main()
{
    Barcelona club;

    club.set_city();
    club.set_team();

    club.display_details();

    return 0;
}