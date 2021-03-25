//Deitels C++ 10th edition exercises
//Pavel Kondratev
//Exercise 2.19
#include <iostream>

using namespace std;

int main() {

   int number1, number2, number3;

   cout << "Enter three numbers: ";
   cin >> number1 >> number2 >> number3;

   int min{number1};
   if (number2 < min) min = number2;
   if (number3 < min) min = number3;

   int max{number1};
   if (number2 > max) max = number2;
   if (number3 > max) max = number3;

    cout << "Sum is " << number1 + number2 + number3 << endl;
    cout << "Average is " << (number1 + number2 + number3) / 3 << endl;
    cout << "Product is " << number1 * number2 * number3 << endl;
    cout << "The smallest is " << min << endl;
    cout << "The largest is " << max << endl;


   return 0;
}
