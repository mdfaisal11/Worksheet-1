#include <iostream>
using namespace std;
class BouncyNumber
{
    int num;
public:
    void getData()
    {
        cout << "Enter a positive integer: ";
        cin >> num;
    }
    bool checkBouncy()
    {
        bool increasing = false, decreasing = false;
        int prev = num % 10;
        int temp = num / 10;

        while (temp > 0)
        {
            int curr = temp % 10;
            if (curr < prev) increasing = true;
            if (curr > prev) decreasing = true;
            if (increasing && decreasing) return true;
            prev = curr;
            temp /= 10;
        }
        return false;
    }
    void displayResult()
    {
        if (checkBouncy())
        {
            cout << "Bouncy" << endl;
        }
        else
        {
            cout << "Not Bouncy" << endl;
        }
    }
};
int main() {
    BouncyNumber b1;
    b1.getData();
    b1.displayResult();
    return 0;
}
