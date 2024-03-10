#include<iostream>
using namespace std;

class Sample {
public:
    typedef int (Sample::*FuncPtr)(int);

    int Compute(FuncPtr func, int n) {
        return (this->*func)(n);
    }

    int findFactorial(int n) {
        int fact = 1;
        for(int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }

    int findSquare(int n) {
        return n * n;
    }

    int findCube(int n) {
        return n * n * n;
    }
};

int main(int argc, char *argv[]) {
    Sample obj;

    int N = atoi(argv[1]);

    int result = obj.Compute(&Sample::findFactorial, N);
    cout << "Factorial of " << N << " is: " << result << endl;

    return 0;
}
