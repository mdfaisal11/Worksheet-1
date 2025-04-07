#include <iostream>
using namespace std;
class TicketBooking
{
    const int SIZE = 5;
    char seats[5][5];
public:
    void displaySeating()
    {
        cout << "Seating Arrangement:" << endl;
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                cout << seats[i][j] << " ";
            }
            cout << endl;
        }
    }
    void initializeSeats() {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                seats[i][j] = 'O';
            }
        }
    }
    TicketBooking()
    {
        initializeSeats();
    }
    void bookSeat()
    {
        int row, col;
        cout << "Enter row and column (1-5) to book: " << endl;
        cin >> row >> col;
        if (row < 1 || row > SIZE || col < 1 || col > SIZE)
        {
            cout << "Invalid seat selection! Try again"<<endl;
        }
        else if (seats[row - 1][col - 1] == 'X')
        {
            cout << "Seat already booked! Choose another"<<endl;
        }
        seats[row - 1][col - 1] = 'X';
        cout << "Seat booked successfully!"<<endl;
    }
};
int main() {
    TicketBooking T1;
    while (true)
    {
        T1.displaySeating();
        T1.bookSeat();
    }

    return 0;
}
