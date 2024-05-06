#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
  cout << "Введите данные" << endl;
  cin >> n;
  if (n < 0) {
    cout << "Неправильно введенный номер";
    return 0;
  }

  cout << "Ответ:" << endl;
  if (n % 10 == 0 || n % 10 > 4 || (n > 10 && n < 15))
    cout << n << " компьютеров";
  else if (n % 10 == 1)
    cout << n << " компьютер";
  else if (n % 10 > 1 && n % 10 < 5)
    cout << n << " компьютера";

}
