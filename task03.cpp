#include <iostream>
using namespace std;

float taxCalculator(char type, float price);

main()
{
    system("cls");

    char type;
    float price;
    string units;
    float tax;

    while (true)
    {

        cout << "Enter the Vehicle Code(M, S, E, V, T): ";
        cin >> type;
        cout << endl;

        cout << "Enter the price of Vehicle: ";
        cin >> price;
        cout << endl;

        tax = taxCalculator(type, price);

        cout <<"The tax price on "<<type<<" type vehicle of price ";
        cout << price <<" is "<<tax<< endl << endl;
    }
}

float taxCalculator(char type, float price)
{
    if ( type == 'M' )
        {

            float taxM = price * 0.06;
            return taxM;

        }
        if (type == 'E' )
        {

            float taxE = price * 0.08;
            return taxE;

        }
        if (type == 'S' )
        {

            float taxS = price * 0.1;
            return taxS;

        }
        if (type == 'V' )
        {

            float taxW = price * 0.12;
            return taxW;

        }
        if ( type == 'T' )
        {
            
            float taxT = price * 0.15;
            return taxT;

        }
}