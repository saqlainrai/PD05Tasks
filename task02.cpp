#include <iostream>
using namespace std;

float volume(float length, float width, float height);

main()
{
    system("cls");

    float length, height, width;
    string units;
    double volumeinm;
    double volumeinkm;
    double volumeinmm;
    double volumeincm;

    while (true)
    {

        cout << "Enter the length of pyramid: ";
        cin >> length;
        cout << endl;

        cout << "Enter the width of pyramid: ";
        cin >> width;
        cout << endl;

        cout << "Enter the height of pyramid: ";
        cin >> height;
        cout << endl;

        cout << "Enter the units you want to get result in(mm, cm, m, km): ";
        cin >> units;
        cout << endl;

        volumeinm = volume(length, width, height);

        if (units == "cm")
        {

            volumeincm = volumeinm * 1000000;
            cout << "The Volume of Cube is " << volumeincm << " cubic centi meters.";
        }
        if (units == "mm")
        {

            volumeinmm = volumeinm * 1000000000;
            cout << "The Volume of Cube is " << volumeinmm << " cubic milli meters.";
        }
        if (units == "km")
        {

            volumeinkm = volumeinm * 0.000000001;
            cout << "The Volume of Cube is " << volumeinm << " cubic meters.";
        }
        if (units == "m")
        {
            cout << "The Volume of Cube is " << volumeinm << " cubic meters.";
        }
        cout<<endl<<endl;
    }
}

float volume(float length, float width, float height)
{
    float output;

    output = (0.333333333333 * (height * (length * width)));

    return output;
}