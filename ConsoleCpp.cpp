#include <iostream>
#include <locale>
#include <limits> // для numeric_limits
using namespace std;

// перечисление допустимых операций
enum class Operation { ADD, SUB, MUL, DIV, UNKNOWN };

// функция для преобразования символа в enum
Operation getOperation(char op) {
    switch(op) {
        case '+': return Operation::ADD;
        case '-': return Operation::SUB;
        case '*': return Operation::MUL;
        case '/': return Operation::DIV;
        default:  return Operation::UNKNOWN;
    }
}

int main() {
    setlocale(LC_ALL, "");

    double a, b;
    char cont = 'y';

    cout << "Welcome to the calculator!" << endl;

    while (cont == 'y' || cont == 'Y') {
        while (true) {
            cout << "Enter the first number: ";
            cin >> a;
            if (!cin.fail()) break;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number.\n";
        }

        Operation opType = Operation::UNKNOWN;
        while (opType == Operation::UNKNOWN) {
            char op;
            cout << "Enter the operation (+ - * /): ";
            cin >> op;
            opType = getOperation(op);
            if (opType == Operation::UNKNOWN) {
                cout << "Invalid operation. Please enter one of (+ - * /).\n";
            }
        }

        while (true) {
            cout << "Enter the second number: ";
            cin >> b;
            if (!cin.fail()) break;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number.\n";
        }

        switch(opType) {
            case Operation::ADD: cout << "Result: " << a + b << endl; break;
            case Operation::SUB: cout << "Result: " << a - b << endl; break;
            case Operation::MUL: cout << "Result: " << a * b << endl; break;
            case Operation::DIV:
                if(b != 0) cout << "Result: " << a / b << endl;
                else cout << "Error: division by zero!" << endl;
                break;
            default: cout << "Unknown operation!" << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> cont;
    }

    cout << "Exiting program..." << endl;
    return 0;
}
