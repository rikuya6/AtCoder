#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main()
{
  int a, b, k;
  set<int> numbers;
  cin >> a >> b >> k;
  for(int i = a, pos = 1; a <= i && i <= b && pos <= k; ++i, ++pos)
    numbers.insert(i);
  for(int i = b - k + 1, pos = 1; a <= i && i <= b && i <= b && pos <= k; ++i, ++pos)
    numbers.insert(i);
  for (auto e : numbers)
    cout << e << endl;
}
