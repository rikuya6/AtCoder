#include <iostream>

using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)

int main()
{
  int a, b;
  int count[101];
  bool check = false;
  fill(count, count + 101, 0);
  while (cin >> a >> b) {
    if (a == 0 && b == 0) {
      for (int i = 3; i < 101; i++) {
        if (count[i] % 2 != 0) {
          check = true;
          break;
        }
      }
      if (count[1] % 2 == 0 || count[2] % 2 == 0) check = true;
      cout << (check ? "NG" : "OK") << endl;
      fill(count, count + 101, 0);
      check = false;
    } else {
      count[a]++;
      count[b]++;
    }
  }
}
