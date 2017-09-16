#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};

void dfs(string map[12], int y, int x)
{
  map[y][x] = '0';
  REP(i, 4) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny >= 0 && ny < 12 && nx >= 0 && nx < 12) {
      if (map[ny][nx] == '1') {
        dfs(map, ny, nx);
      }
    }
  }
}

int main()
{
  string s;
  while (cin >> s) {
    string map[12];
    map[0] = s;
    for (int i = 1; i <= 11; ++i) {
      cin >> s;
      map[i] = s;
    }
    // for (auto& e : map) {
    //   cout << e << endl;
    // }
    int cnt = 0;
    for (int i = 0; i < 12; ++i) {
      for (int k = 0; k < 12; ++k) {
        if (map[i][k] == '1') {
          ++cnt;
          dfs(map, i, k);
        }
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
