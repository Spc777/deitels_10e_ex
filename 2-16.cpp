//Deitels C++ 10th edition exercises
//Pavel Kondratev
//Exercise 2.16

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Please, input two numbers: ";
    cin >> num1 >> num2;
    cout << "the sum of entered numbers is: " << num1 + num2 << endl
    << "the product of entered numbers is: " << num1 * num2 << endl
    << "the difference of entered numbers is: " << num1 - num2 << endl;
    if (num2 !=0)
    cout << "the quotient of entered numbers is: " << num1 / num2;
    else
        cout << "you cannot divide by zero!";


    return 0;
}
