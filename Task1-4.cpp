#include <iostream>
using namespace std;
class DayOfWeek
{
    int day;
public:
    void getData()
    {
        cout << "Enter a number between (1-7) to get the corresponding day of the week: ";
        cin >> day;
    }
    void displayDay()
    {
        switch (day)
        {
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thursday";
            break;
        case 6:
            cout << "Friday";
            break;
        case 7:
            cout << "Saturday";
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7.";
            break;
        }
    }
};
int main()
{
    DayOfWeek D1;
    D1.getData();
    D1.displayDay();

    return 0;
}

