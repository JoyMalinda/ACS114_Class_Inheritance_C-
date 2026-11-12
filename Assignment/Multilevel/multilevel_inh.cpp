#include <iostream>
#include <string>

using namespace std;

class Brand
{
    protected:
        string brand_name;
        string country;

    public:
        void set_brand()
        {
            brand_name = "Aston Martin";
            country = "United Kingdom";
        }

        void display_brand()
        {
            cout << "Brand: " << brand_name << endl;
            cout << "Country: " << country << endl;
        }
};

class Aston_Martin: public Brand
{
    protected:
        string founder;
        int year_founded;

    public:
        void set_aston_martin()
        {
            founder = "Lionel Martin and Robert Bamford";
            year_founded = 1913;
        }

        void display_aston_martin()
        {
            cout << "Founders: " << founder << endl;
            cout << "Year Founded: " << year_founded << endl;
        }
};

class Vanquish: public Aston_Martin
{
    private:
        string model;
        int horsepower;
        double price;

    public:
        void set_vanquish()
        {
            model = "Aston Martin Vanquish";
            horsepower = 824;
            price = 450000;
        }

        void display_vanquish()
        {
            cout << "\nVEHICLE DETAILS\n";

            display_brand();
            display_aston_martin();

            cout << "Model: " << model << endl;
            cout << "Horsepower: " << horsepower << " HP" << endl;
            cout << "Price: $" << price << endl;
        }
};

int main()
{
    Vanquish car;

    car.set_brand();
    car.set_aston_martin();
    car.set_vanquish();

    car.display_vanquish();

    return 0;
}