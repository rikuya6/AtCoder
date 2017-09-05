#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int d;
  while (cin >> d) {
    int sum = 0;
    for (int i = 0; i < 600; i += d) {
      sum += (i * i) * d;
    }
    cout << sum << endl;
  }
  return 0;
}
