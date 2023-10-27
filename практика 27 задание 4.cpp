#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int masiv[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int summa = 0;
    for (int i = 0; i < 10; i++)
    {
        summa += masiv[i];
    }
    cout << "Среднее арифметическое:\n" << summa / 10 << endl;
    return 0;
}