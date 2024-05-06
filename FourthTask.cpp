#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
     setlocale(LC_ALL, "Russian");
     int n;
     cout << "Введите данные" << endl;
     cin >> n;
     if (n <= 0) {
       cout << "Неверно введенные данные";
       return 0;
     }
     for (int i = 0; i <= n; i++) {
       for (int j = 0; j <= n; j++) {
         if (j == 0 && i == 0)
           cout << " ";
         else if (i == 0)
           cout << j;
         else if (j == 0)
           cout << i;
         else
           cout << i * j;
         cout << " ";
       }
       cout << endl;
     }
}
