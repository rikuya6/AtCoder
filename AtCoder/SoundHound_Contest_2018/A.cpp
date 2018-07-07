#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int a, b;
  cin >> a >> b;
  if (a + b == 15) {
    cout << "+" << endl;
  } else if (a * b == 15) {
    cout << "*" << endl;
  } else {
    cout << "x" << endl;
  }
}
