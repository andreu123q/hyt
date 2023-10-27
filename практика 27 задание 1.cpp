#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int a, b, c;
    int num;
    cin >> num;
    a = num / 100;
    b = (num % 100) / 10;
    c = num % 10;

    int sum = a + b + c;
    int mult = a * b * c;
    cout << "Сумма цифр числа: " << sum << endl << "Произведение цифр числа: " << mult;
}