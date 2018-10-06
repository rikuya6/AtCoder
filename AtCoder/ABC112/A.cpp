#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << "Hello World" << endl;
  } else {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
  }
}
