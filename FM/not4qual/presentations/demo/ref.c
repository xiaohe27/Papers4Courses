// Example program
#include <iostream>
#include <string>

using namespace std;
int main()
{
int a = 5;
int &b = a;

cout << a <<endl;
cout << b <<endl;

b = 22;

cout << a <<endl;
cout << b <<endl;

}

