#include <iostream>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  int sizes[] = {60, 80, 100, 120, 140, 160}, weights[] = {2, 5, 10, 15, 20, 25}, values[] = {600, 800, 1000, 1200, 1400, 1600};
  while (cin >> n, n) {
    int x, y, h, w, sum = 0;
    while (n--) {
      cin >> x >> y >> h >> w;
      int size = x + y + h;
      REP(i, 6) {
        if (size <= sizes[i] && w <= weights[i]) {
          sum += values[i];
          break;
        }
      }
    }
    cout << sum << endl;
  }
  return 0;
}
