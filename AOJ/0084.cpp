#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  string s;
  getline(cin, s);
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == ' ' || s[i] == '.' || s[i] == ',') s[i] = ' ';
  }
  stringstream ss;
  ss << s;
  vector<string> v;
  while (ss >> s) {
    if (2 < s.size() && 7 > s.size()) {
      v.push_back(s);
    }
  }
  int size = v.size();
  REP(i, size) {
    if (i != size -1) cout << v[i] << " ";
    else cout << v[i];
  }
  cout << endl;
  return 0;
}
