#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  while (true) {
    string in;
    getline(cin, in);
    if (in[0] == '0') break;
    stringstream ss;
    ss << in;
    int n, sum = 0, one_cnt = 0;
    while (ss >> n) {
      // cout << "n " << n << " ";
      if (n >= 2 && n <= 9) sum += n;
      if (n == 1) {
        sum += 11;
        one_cnt++;
      }
      if (n >= 10) sum += 10;
    }
    // cout << endl;
    REP(i, one_cnt) {
      if (sum > 21) sum -= 10;
    }
    cout << (sum > 21 ? 0 : sum) << endl;
  }
  return 0;
}
