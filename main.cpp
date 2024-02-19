#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

int main()
{
    int num1;
    int num2;
    string math_operator;
    cout << "Hello! This is a Simple Math Calculator Program\n"
         << "Give me the first number: ";
    cin >> num1;
    cout << "Give me the second number: ";
    cin >> num2;
    cout << "Give me the arithmetical operator (+,-,/,*): ";
    cin >> math_operator;

    if (math_operator == "+")
    {
        cout << "Result: " << sum(num1, num2) << endl;
    }
    else if (math_operator == "-")
    {
        cout << "Result: " << subtraction(num1, num2) << endl;
    }
    else if (math_operator == "*")
    {
        cout << "Result: " << multiplication(num1, num2) << endl;
    }
    else if (math_operator == "/")
    {
        cout << "Result: " << division(num1, num2) << endl;
    }

    return 0;
}