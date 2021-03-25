//Deitels C++ 10th edition exercises
//Pavel Kondratev
//Exercise 2.20
#include <iostream>

using namespace std;

int main() {
float pi{3.14159};
int radius;
cout << "Please, enter a circle radius: \n";
cin >> radius;
cout << "Circle's diameter is: " << radius * 2 << endl;
cout << "Circle's circumference is: " << pi * radius * 2 << endl;
cout << "Circle's(disk) area is: " << pi * radius * radius << endl;


   return 0;
}
