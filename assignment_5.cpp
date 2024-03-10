#include <iostream>
#include <string>
using namespace std;

class User {
private:
    string name;
    int birthYear;
    double salary;

public:
    User(string name, int birthYear, double salary)
        : name(name), birthYear(birthYear), salary(salary) {}

    int compareAge(const User& other) const {
        return (this->birthYear < other.birthYear) ? 1 : ((this->birthYear > other.birthYear) ? -1 : 0);
    }

    double calculateAverageSalary(const User& other) const {
        return (this->salary + other.salary) / 2.0;
    }

    void incrementSalary(int percentage) {
        this->salary *= (1 + (percentage / 100.0));
    }

    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Birth Year: " << birthYear << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    User user1("Naman", 2003, 60000.0);
    User user2("Nikhil", 2001, 50000.0);

    int result = user1.compareAge(user2);
    if (result == 1)
        cout << "User1 is elder" << endl;
    else if (result == -1)
        cout << "User2 is elder" << endl;
    else
        cout << "Both users are of the same age" << endl;

    double averageSalary = user1.calculateAverageSalary(user2);
    cout << "Average Salary: $" << averageSalary << endl;

    user1.incrementSalary(5);
    user2.incrementSalary(10);

    cout << endl << "User1 Details:" << endl;
    user1.displayDetails();
    cout << endl;

    cout << "User2 Details:" << endl;
    user2.displayDetails();

    return 0;
}
