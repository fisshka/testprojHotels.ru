#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
      vector<int> input, rezult;
  int n;
  cout << "Введите данные(0 считается концом вывода)" << endl;
  while (cin >> n) {
    if (n == 0) break;
    input.push_back(n);
  }
  if (input.size() == 0) {
    cout << "Неверно введенные данные";
    return 0;
  }
  int mi = *min_element(begin(input), end(input));

  for (int i = 1; i < sqrt(mi) + 1; i++)
    if (mi % i == 0) rezult.push_back(i);
  if (mi % 2 == 0 && mi / 2 != 1) rezult.push_back(mi / 2);
  if (mi != rezult[rezult.size() - 2] && mi != rezult[rezult.size() - 1])
    rezult.push_back(mi);
  for (int j = 0; j < input.size(); j++)
    for (int i = 0; i < rezult.size(); i++)
      if (input[j] % rezult[i] != 0) rezult.erase(rezult.begin() + i);
     cout<<"Ответ(вывод всех общих делителей, кроме единицы, в соответствии с примером):"<<endl;
     for(int i = 1; i < rezult.size(); i++)
         cout<<rezult[i]<<" ";
}
