#include <iostream>
using namespace std;

class Calculator {
    private:
        int a, b, c;
    public:
        int add(int a, int b) {
            return a + b;
    }

        int add(int a, int b, int c) {
            return a + b + c;
    }

        float add(float a, float b) {
            return a + b;
    }

        int subtract(int a, int b) {
            return a - b;
    }

        int multiply(int a, int b) {
            return a * b;
    }

        float divide(float a, float b) {
            if (b == 0) {
            return 0;
        }
            return a / b;
    }
};

int main() {
    Calculator calc;
    int choice;

    cout << "=== Simple Calculator ===" << endl;
    cout << "1. Add two integers" << endl;
    cout << "2. Add three integers" << endl;
    cout << "3. Add two floats" << endl;
    cout << "4. Subtract two integers" << endl;
    cout << "5. Multiply two integers" << endl;
    cout << "6. Divide two floats" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    if (choice == 1) {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "Result: " << calc.add(a, b) << endl;
    }
    else if (choice == 2) {
        int a, b, c;
        cout << "Enter three integers: ";
        cin >> a >> b >> c;
        cout << "Result: " << calc.add(a, b, c) << endl;
    }
    else if (choice == 3) {
        float a, b;
        cout << "Enter two floats: ";
        cin >> a >> b;
        cout << "Result: " << calc.add(a, b) << endl;
    }
    else if (choice == 4) {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "Result: " << calc.subtract(a, b) << endl;
    }
    else if (choice == 5) {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "Result: " << calc.multiply(a, b) << endl;
    }
    else if (choice == 6) {
        float a, b;
        cout << "Enter two floats: ";
        cin >> a >> b;
        cout << "Result: " << calc.divide(a, b) << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}