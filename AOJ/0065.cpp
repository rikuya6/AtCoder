#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
#include <cstdio>
#include <cstring>

using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

void add1(map<int, pair<int, int>>& map, int c)
{
  auto it = map.find(c);
  if (it == map.end()) map.insert(make_pair(c, make_pair(1, 0)));
  else ++it->second.first;
}

void add2(map<int, pair<int, int>>& map, int c)
{
  auto it = map.find(c);
  if (it == map.end()) map.insert(make_pair(c, make_pair(0, 1)));
  else ++it->second.second;
}


int main()
{
  int c, d;
  map<int, pair<int, int>> map;
  stringstream ss;
  string str;
  while (true) {
    char work[100];
    fgets(work, 9999, stdin);
    if (strcmp(work, "\n") == 0) break;
    ss << work;
    ss >> c >> work >> d;
    add1(map, c);
    ss.clear();
  }
  char work;
  while (getline(cin, str)) {
    ss << str;
    ss >> c >> work >> d;
    add2(map, c);
    str.clear();
    ss.clear();
  }
  for (auto& e : map) {
    // cout << e.first << " " << e.second.first << " " << e.second.second << endl;
    if (e.second.first >= 1 && e.second.second >= 1) {
      cout << e.first << " " << e.second.first + e.second.second << endl;
    }
  }
  return 0;
}
