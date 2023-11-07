#include <iostream>



using namespace std;



double Add(double a, double b) {
    return a + b;
}

double Subtract(double a, double b) {
    return a - b;
}

double Multiply(double a, double b) {
    return a * b;
}

double Divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0.0;
    }
    return a / b;
}

int main() {
    double (*operation[4])(double, double) = { Add, Subtract, Multiply, Divide };

    while (true) {
        cout << "Choose an operation:" << endl;
        cout << "0. Addition" << endl;
        cout << "1. Subtraction" << endl;
        cout << "2. Multiplication" << endl;
        cout << "3. Division" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cin >> choice;

        if (choice < 0 || choice > 3) {
            cout << "Invalid operation choice. Please try again." << endl;
            continue;
        }

        if (choice == 4) {
            break;
        }

        double num1, num2;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        double result = operation[choice](num1, num2);
        cout << "Result: " << result << endl;
    }

    return 0;
}
 