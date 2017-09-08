#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  int counter[101];
  fill(counter, counter + 101, 0);
  while (cin >> n) {
    ++counter[n];
  }
  int max = -1;
  REP(i, 101) {
    max = std::max(counter[i], max);
  }
  REP(i, 101) {
    if (counter[i] == max) cout << i << endl;
  }
  return 0;
}
