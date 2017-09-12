// WA 改行を無視しため、2ヶ月連続になっていない
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  char work;
  int c, d;
  map<int, int> map;
  while (cin >> c >> work >> d) {
    auto it = map.find(c);
    if (it == map.end()) map.insert(make_pair(c, 1));
    else ++it->second;
  }
  for (auto& e : map) {
    // cout << e.first << " " << e.second << endl;
    if (e.second >= 2) {
      cout << e.first << " " << e.second << endl;
    }
  }
  return 0;
}
