#include <iostream>
using namespace std;

int main()
{
    double n1, n2;
    char op;
    char choice;

    do {
        cout << "-------------------------\n";
        cout << "     Simple Calculator   \n";
        cout << "-------------------------\n";

        cout << "Enter First Number: ";
        cin >> n1;

        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter Second Number: ";
        cin >> n2;

        switch(op) 
        {
            case '+':
                cout << "Result: " << n1 + n2 << endl;
                break;
            case '-':
                cout << "Result: " << n1 - n2 << endl;
                break;
            case '*':
                cout << "Result: " << n1 * n2 << endl;
                break;
            case '/':
                if (n2 != 0)
                    cout << "Result: " << n1 / n2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            default:
                cout << "Invalid Operator!" << endl;
        }

        cout << "Do you want to calculate again (y/n): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}