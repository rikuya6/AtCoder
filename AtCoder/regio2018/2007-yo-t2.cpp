#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  vector<bool> number(31, false);
  for (int i = 0; i < 28; ++i) {
    int num;
    cin >> num;
    number[num] = true;
  }
  for (int i = 1; i <= 30; ++i) {
    if (!number[i])
      cout << i << endl;
  }
}
