#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int a = 200, b = 300;
  string name;
  int v1, v2;
  REP(i, 9) {
    cin >> name >> v1 >> v2;
    cout << name << " " << v1 + v2 << " " << v1 * a + v2 * b << endl;
  }
  return 0;
}
