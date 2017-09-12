#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  string str;
  int sum = 0;
  while (cin >> str) {
    string number_str;
    for (auto it = str.begin(); it < str.end(); ++it) {
      if (isdigit(*it)) {
        for (; it != str.end(); ++it) {
          if (isdigit(*it)) {
            number_str += *it;
          }else{
            break;
          }
        }
        sum += atoi(number_str.c_str());
        number_str = "";
      }
    }
    // cout << sum << endl;
  }
  cout << sum << endl;
  return 0;
}
