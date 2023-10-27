#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int x;
    int b = 0;

cin >> x;

while(x)
{ 
    x=x / 10;
    b++;
}
cout << endl << b;
