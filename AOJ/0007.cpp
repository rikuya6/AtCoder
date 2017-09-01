#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n, sum = 100000;
  cin >> n;
  REP(i, n) {
    if ((int)(sum * 1.05) % 1000 == 0) {
      sum = sum * 1.05;
    }else{
      sum = sum * 1.05 + 1000 - ((int)(sum * 1.05) % 1000);
    }
  }
  cout << sum << endl;
  return 0;
}
