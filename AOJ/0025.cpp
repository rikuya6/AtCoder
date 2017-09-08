#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  while (true) {
    int num[8];
    REP(i, 8) {
      int a;
      if (cin >> a) num[i] = a;
      else return 0;
    }
    int hit = 0, blow = 0;
    for (int i = 0; i < 4; i++) {
      for (int k = 4; k < 8; k++) {
        if (num[i] == num[k]) {
          if (i == k - 4) ++hit;
          else ++blow;
        }
      }
    }
    cout << hit << " " << blow << endl;
  }
  return 0;
}
