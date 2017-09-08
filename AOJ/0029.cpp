#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  map<string, int> m;
  string str;
  int len_max = -1;
  string len_max_str;
  while (cin >> str) {
    auto it = m.find(str);
    if (it == m.end()) m.insert(make_pair(str, 0));
    else ++it->second;
    int size = str.size();
    if (len_max < size) {
      len_max = size;
      len_max_str = str;
      // cout << len_max_str << endl;
    }
  }
  int max = -1;
  string max_str;
  for (auto& e : m) {
    if (max < e.second) {
      max = e.second;
      max_str = e.first;
    }
  }
  cout << max_str << " " << len_max_str << endl;
  return 0;
}
