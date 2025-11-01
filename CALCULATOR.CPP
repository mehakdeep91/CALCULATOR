#include <iostream>
using namespace std;

// Class definition
class Calculator {
private:
    double num1, num2;

public:
    // Function to take input
    void getInput() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    // Functions to perform operations
    void add() {
        cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }

    void subtract() {
        cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }

    void multiply() {
        cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }

    void divide() {
        if (num2 != 0)
            cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        else
            cout << "Error: Division by zero is not allowed!" << endl;
    }
};

int main() {
    Calculator calc;
    int choice;

    cout << "----- SIMPLE CALCULATOR -----" << endl;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";

    do {
        cout << "\nEnter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                calc.getInput();
                calc.add();
                break;
            case 2:
                calc.getInput();
                calc.subtract();
                break;
            case 3:
                calc.getInput();
                calc.multiply();
                break;
            case 4:
                calc.getInput();
                calc.divide();
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
