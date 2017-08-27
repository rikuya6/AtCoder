#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int a;
  while (cin >> a) {
    cout << "3C" << setfill('0') << setw(2) << (a % 39 == 0 ? 39 : a % 39) << endl;
  }
  return 0;
}
