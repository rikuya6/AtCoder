#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  while(cin >> n) {
    int count = 0;
    REP(i, 10) {
      REP(k, 10) {
        REP(l, 10) {
          REP(m, 10) {
            if (i + k + l + m == n)
              count++;
          }
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}
