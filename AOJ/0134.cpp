#include <iostream>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  cin >> n;
  long long v, sum = 0;
  REP(i, n) {
    cin >> v;
    sum += v;
  }
  cout << sum / n << endl;
  return 0;
}
