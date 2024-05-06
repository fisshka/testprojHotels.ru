#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
     setlocale(LC_ALL, "Russian");
     int RangeMin, RangeMax, t = 0;
     cout << "Введите данные" << endl;
     cin >> RangeMin >> RangeMax;
     if (RangeMax <= 0 || RangeMin < 0) {
       cout << "Неверно введенные данные";
       return 0;
     }
     for (int i = RangeMin; i <= RangeMax; i++) {
       for (int j = 2; j < sqrt(i) + 1; j++)
         if (i % j == 0 && i != 2) {
           t = 1;
           break;
         }
       if (t == 0) cout << i << " ";
       t = 0;
     }
}
