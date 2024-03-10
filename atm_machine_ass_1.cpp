#include <iostream>
#include <string>
using namespace std;

class ATM {
private:
    string id, password;
    double deposit, withdraw, balance;
    string id1, password1;

public:
    ATM() {
        balance = 0.0;
    }

    void printIntroMenu() {
        cout << "Please select an option from the menu below:" << endl;
        cout << "l -> Login" << endl;
        cout << "c -> Create New Account" << endl;
        cout << "q -> Quit" << endl;
        cout << "> ";
    }

    void printMainMenu() {
        cout << "d -> Deposit Money" << endl;
        cout << "w -> Withdraw Money" << endl;
        cout << "r -> Request Balance" << endl;
        cout << "q -> Quit" << endl;
        cout << "> ";
    }

    void createAccount() {
        cout << "Please enter your user id: ";
        cin >> id;
        cout << "Please enter your password: ";
        cin >> password;
        id1 = id;
        password1 = password;
        cout << "Thank You! Your account has been created!" << endl;
    }

    void login() {
        cout << "Please enter your user id: ";
        cin >> id;
        cout << "Please enter your password: ";
        cin >> password;
        if (id == id1 && password == password1) {
            cout << "******** Access Granted! ********" << endl;
            char choice;
            do {
                printMainMenu();
                cin >> choice;
                switch(choice) {
                    case 'd': {
                        cout << "Amount of deposit: $";
                        cin >> deposit;
                        balance += deposit;
                        cout << "******** Successfully Deposited! ********" << endl;
                        break;
                    }
                    case 'w': {
                        cout << "Amount of withdrawal: $";
                        cin >> withdraw;
                        if (withdraw <= balance) {
                            balance -= withdraw;
                            cout << "******** Successfully Withdrew! ********" << endl;
                        } else {
                            cout << "Insufficient funds." << endl;
                        }
                        break;
                    }
                    case 'r': {
                        cout << "Your balance is $" << balance << endl;
                        break;
                    }
                    case 'q': {
                        cout << "******** Thanks for stopping bye! ********" << endl;
                        return;
                    }
                    default: {
                        cout << "Invalid option. Please try again." << endl;
                    }
                }
            } while (true);
        } else {
            cout << "******** LOGIN FAILED! ********" << endl;
        }
    }

    void start() {
        char choice;
        do {
            cout << "Hi! Welcome to Mr. Zamar’s ATM Machine!" << endl;
            printIntroMenu();
            cin >> choice;
            switch(choice) {
                case 'l':
                    login();
                    break;
                case 'c':
                    createAccount();
                    break;
                case 'q':
                    cout << "Thanks for using Mr. Zamar’s ATM Machine!" << endl;
                    exit(0);
                default:
                    cout << "Invalid option. Please try again." << endl;
            }
        } while (true);
    }
};

int main() {
    ATM atm;
    atm.start();
    return 0;
}
