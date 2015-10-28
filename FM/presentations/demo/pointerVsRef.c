// Example program
#include <iostream>
#include <string>

using namespace std;
int main()
{
cout << "without aliasing" << endl;
int a1 = 5;
int b1 = a1;

cout << "a1 is " << a1 <<endl;
cout << "b1 is " << b1 <<endl;

b1 = 22;
cout << "after assignment b1 = 22" << endl;

cout << "a1 is " << a1 <<endl;
cout << "b1 is " << b1 <<endl;

cout << "\n\nAliasing example" <<endl;

int a2 = 5;
int &b2 = a2;

cout << "a2 is " << a2 <<endl;
cout << "b2 is " << b2 <<endl;

cout << "after assignment b2 = 22" << endl;

b2 = 22;

cout << "a2 is " << a2 <<endl;
cout << "b2 is " << b2 <<endl;
}

