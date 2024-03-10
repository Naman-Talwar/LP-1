#include<iostream>
#include<cstring>
using namespace std;

class Sample {
public:
    char *name;

    Sample() { }

    Sample(char *str, int length) {
        name = new char[length + 1];
        strcpy(name, str);
    }

    Sample(const Sample &other) {
        int length = strlen(other.name);
        name = new char[length + 1];
        strcpy(name, other.name);
    }

    ~Sample() {
        delete[] name;
    }
};

int main(int argc, char *argv[]) {
    Sample user1((char *)"chitkara", 8);
    Sample user2 = user1;

    strcpy(user2.name, "dummy");

    cout << user2.name << " " << user1.name << endl;

    return 0;
}
