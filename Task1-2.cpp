#include <iostream>
using namespace std;
class GuessingGame
{
private:
    int lower, upper, randomNumber;
    char choice;

public:
    void getChoice()
    {
        cout << "Choose the level: Easy (E), Medium (M), Hard (H): ";
        cin >> choice;
    }
    void getDifficulty()
    {
        if (choice == 'e' || choice == 'E')
        {
            lower = 1;
            upper = 8;
        }
        else if (choice == 'm' || choice == 'M')
        {
            lower = 1;
            upper = 30;
        }
        else if (choice == 'h' || choice == 'H')
        {
            lower = 1;
            upper = 50;
        }
        else
        {
            cout << "Invalid choice! Please restart the game"<<endl;
        }
    }
    void getRandomNumber()
    {
        randomNumber = rand() % (upper - lower + 1) + lower;
    }
    void getGuess()
    {
        int guess;
        cout << "Guess the number between " << lower << " and " << upper << ": ";
        cin >> guess;

        if (guess == randomNumber)
        {
            cout << "Congratulations! You guessed the correct number" << endl;
        }
        else
        {
            cout << "Wrong guess! The correct number was " << randomNumber << "." << endl;
        }
    }

};
int main()
{
    GuessingGame G1;
    G1.getChoice();
    G1.getDifficulty();
    G1.getRandomNumber();
    G1.getGuess();

    return 0;

}


