#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
  cout << "������� ������" << endl;
  cin >> n;
  if (n < 0) {
    cout << "����������� ��������� �����";
    return 0;
  }

  cout << "�����:" << endl;
  if (n % 10 == 0 || n % 10 > 4 || (n > 10 && n < 15))
    cout << n << " �����������";
  else if (n % 10 == 1)
    cout << n << " ���������";
  else if (n % 10 > 1 && n % 10 < 5)
    cout << n << " ����������";

}
