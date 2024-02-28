#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

class GuessTheNumber {
private:
    int start, end;
    int computerGeneratedNumber;
    int userGeneratedNumber;
    int attempts, count;

public:
    GuessTheNumber() {
        count = 0;
    }

    void setRange() {
        cout << "Enter range first number : ";
        cin >> start;
        cout << "Enter range last number : ";
        cin >> end;
    }

    void generateRandomNumber() {
        srand(time(0)); // Seed the random number generator
        computerGeneratedNumber = rand() % (end - start + 1) + start;
        attempts = floor(log2(end - start + 1));
        cout << "You have given " << attempts << " chances to guess a computer-generated number." << endl;
    }

    void startGame() {
        cout << "Welcome to the Guess The Number Game!" << endl;
        setRange();
        generateRandomNumber();

        while (count < attempts) {
            count++;
            cout << "Guess the number : ";
            cin >> userGeneratedNumber;
            cout << "Attempt: " << count << endl;

            if (userGeneratedNumber > computerGeneratedNumber) {
                cout << "Message: Guessed number is greater than computer generated number." << endl;
            } else if (userGeneratedNumber < computerGeneratedNumber) {
                cout << "Message: Guessed number is smaller than computer generated number." << endl;
            } else {
                break;
            }
        }

        if (count == attempts) {
            cout << "Messgae: You exhausted all your chances of guessing and better to try next time. Computer generated number was " << computerGeneratedNumber << "." << endl;
        } else {
            cout << "Message: Congratulations! You won the game in " << count << " chances and the number was " << computerGeneratedNumber << "." << endl;
        }
    }
};

int main() {
    GuessTheNumber game;
    game.startGame();

    return 0;
}


