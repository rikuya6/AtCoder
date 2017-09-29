#include <iostream>
#include <string>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  string s;
  int data[10][10];
  while (cin >> s) {
    for (int i = 0; i < s.size(); ++i) {
      data[i] = s[i] - '0';
    }
    for (int i = 1; i < 10; ++i) {
      for (int k = 0; k < 10 - k; ++k) {
        data[i][k] = data[][k];
      }
    }
  }
  return 0;
}
