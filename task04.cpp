#include <iostream>
using namespace std;

float timeCalculator(int hours, int days, int workers);

main()
{
    system("cls");

    int hours, days, workers;
    float totalHours, hoursLeft, negativeHours;

    while (true)
    {

        cout << "Enter the Needed Hours(0-200000): ";
        cin >> hours;
        cout << endl;

        cout << "Enter the Days a Firm Has(0-20000): ";
        cin >> days;
        cout << endl;

        cout << "Enter the Numbers of all Workers(0-200): ";
        cin >> workers;
        cout << endl;

        totalHours = timeCalculator(hours, days, workers);

        // cout<<totalHours;
        // cout<<endl<<endl;

        hoursLeft = totalHours - hours;
        negativeHours = hoursLeft * -1;

        if ( totalHours < hours )
        {
            cout<<"Not Enough time! "<< negativeHours <<" hours are Needed.";
        }
        if ( totalHours > hours )
        {
            cout<<"Yes! "<< hoursLeft <<" hours are Left.";
        }
        if ( totalHours == hours )
        {
            cout<<"Yes! the workers can attempt the task.";
        }
            cout<<endl<<endl;

    }
    
}

float timeCalculator(int hours, int days, int workers)
{
    float leftDays = days * 0.9;
    float totalHours = leftDays * 10 ;
    float totalHoursofWorkers = totalHours * workers ;

    return totalHoursofWorkers;
}