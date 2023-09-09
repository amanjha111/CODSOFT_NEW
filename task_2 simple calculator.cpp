#include <iostream>
#include <iomanip>
using namespace std;
double add(double p1, double p2) 
{
    return p1 + p2;
}
double subtract(double p1, double p2) 
{
    return p1 - p2;
}
double multiply(double p1, double p2) 
{
    return p1 * p2;
}
double divide(double p1, double p2) 
{
    if (p2 == 0) {
        cout << "Error occurs: Can't divide by zero!" << endl;
        return 0.0;
    }
    return p1 / p2;
}
int main() {
    double p1, p2;
    char operation;
    cout<<"Get ready to use calculator:\n";

    cout << "Enter first number: ";
    cin >> p1;
    cout << "\nAvailable operations:" << endl;
    cout << "  + : Addition" << endl;
    cout << "  - : Subtraction" << endl;
    cout << "  * : Multiplication" << endl;
    cout << "  / : Division" << endl;
    cout << "select an operation to be performed: ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> p2;
    double result = 0.0;
    switch (operation) {
        case '+':
            result = add(p1, p2);
            break;
        case '-':
            result = subtract(p1, p2);
            break;
        case '*':
            result = multiply(p1, p2);
            break;
        case '/':
            result = divide(p1, p2);
            break;
        default:
            cout << "Selected operation is Invalid" << endl;
            return 1;
    }
    cout << "==========================" << endl;
    cout << "ANSWER: " << fixed << setprecision(2) << result << endl;
    return 0;
}                                      
