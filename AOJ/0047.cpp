#include <iostream>

using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  char s, t, work, ball = 'A';
  while (cin >> s >> work >> t) {
    if (ball == s) ball = t;
    else if (ball == t) ball = s;
  }
  cout << ball << endl;
  return 0;
}
