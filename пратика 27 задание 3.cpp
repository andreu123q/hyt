#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int masiv[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int summa = 0;
    for (int i = 0; i < 10; i++)
    {
        summa = summa + masiv[i];
    }
    cout << "сумма  = " << summa;
    return 0;
}