#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int w, n;
  cin >> w >> n;
  int number[w + 1];
  REP(i, w + 1) number[i] = i;
  int a, b;
  REP(i, n) {
    cin >> a;
    cin.ignore();
    cin >> b;
    swap(number[a], number[b]);
  }
  for (int i = 1; i <= n; i++) {
    cout << number[i] << endl;
  }
  return 0;
}
