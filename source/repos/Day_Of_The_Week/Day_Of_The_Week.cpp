#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << ("What day of the week is it?") << endl << ("Pick a number in the interval 1-7 that corresponds to the day please. ") << endl;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
        // If another value(an invalid one) is entered, use default
    default:
        cout << "Invalid value, please try again. ";
    }

    return 0;
}

