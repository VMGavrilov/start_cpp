#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using ullong = unsigned long long;

enum class Operation : char { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

int main()
{
    double num1, num2;
    char opInput;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> opInput;

    cout << "Enter second number: ";
    cin >> num2;

    Operation op = static_cast<Operation>(opInput);

    double result = 0.0;
    bool valid = true;

    switch (op)
    {
    case Operation::Add:
        result = num1 + num2;
        break;
    case Operation::Subtract:
        result = num1 - num2;
        break;
    case Operation::Multiply:
        result = num1 * num2;
        break;
    case Operation::Divide:
        if (num2 == 0.0)
        {
            cout << "Error: division by zero!" << endl;
            valid = false;
        }
        else
        {
            result = num1 / num2;
        }
        break;
    default:
        cout << "Error: unknown operation \"" << opInput << "\"" << endl;
        valid = false;
        break;
    }

    if (valid)
    {
        cout << num1 << " " << opInput << " " << num2 << " = " << result << endl;
    }

    return 0;
}
