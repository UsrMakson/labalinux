#include <iostream>
#include <cmath>
#include "Header.h"
#include <limits>



using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int A, B;
    int zero = 0;
    int one = 0;
    int two = 0;
    bool pop = false;

    int number = randomnumber();
    int* f = new int[4]; int dop = number;
    for (int i = 3; i >= 0; i--) {
        f[i] = dop % 10;
        dop /= 10;
    }
    cout << "Введите четырёхзначное число - ";

    while (pop == false) {
        int l = 3;
        while (!(cin >> B) || B < 1000 || B>9999) {
            cout << "Повторите попытку - ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << endl;
        while (B > 0) {
            int N = proverka(f, B % 10, l);
            if (N == 0) {
                one++;
            }
            else if (N == 1) {
                two++;
            }
            B /= 10;
            l--;
        }
        if (two == 4) {
            cout << "Правильно! Вы выиграли! Ура!";
            pop = true;
        }
        else {
            cout << "Вы на пути к правильному ответу! Коров - " << one << " , а быков - " << two << endl;
            one = 0; two = 0;
        }
    }
}
