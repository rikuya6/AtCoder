// WA
#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n; cin >> n;
  int map[6] = {0, 1, 2, 3, 4, 5}, map2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 5, 4, 3, 2, 1, 0, 1, 2, 3, 4, 5, 6};
  while (n--) {
    int s, e;
    cin >> s >> e;
    if (s <= 5 && e <= 5) {
      if (s < e) {
        for (int i = s; i <= e; i++) cout << map[i] << ((i == e) ? "\n" : " ");
      } else {
        for (int i = s; i >= e ; i--) cout << map[i] << ((i == e) ? "\n" : " ");
      }
    } else {
      int pos = s;
      // cout << s;
      while (true) {
        cout << map2[pos] << ((map2[pos] == e) ? "\n" : " ");
        if (map2[pos] == e) break;
        else pos++;
      }
    }
  }
  return 0;
}
