#include <iostream>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  for (int i = 1; i <= 9; i++) {
    for (int k = 1; k <= 9; k++) {
      cout << i << "x" << k << "=" << i * k << endl;
    }
  }
  return 0;
}
