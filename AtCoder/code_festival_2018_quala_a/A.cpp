#include <iostream>
#include <string>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

bool check(int a, int b, int c, int s) {
  if (a + b + c == s) return true;
  if (a + b + c + 1 == s) return true;
  if (a + b + c + 2 == s) return true;
  if (a + b + c + 3 == s) return true;
  return false;
}

int main() {
  int a, b, c, s;
  cin >> a >> b >> c >> s;
  if (check(a, b, c, s)) cout << "Yes" << endl;
  else cout << "No" << endl;
}
