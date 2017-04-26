#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define INF (1 << 29)

int main()
{
  int n;
  while(cin >> n, n) {
    int data, sum = 0, max = -1, min = INF;
    REP(i, n) {
      cin >> data;
      sum += data;
      max = std::max(max, data);
      min = std::min(min, data);
    }
    sum -= max;
    sum -= min;
    cout << sum / (n - 2) << endl;
  }
  return 0;
}
