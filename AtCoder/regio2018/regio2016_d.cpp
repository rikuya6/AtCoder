#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  int a_score{}, b_score{};
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a >> b;
    if (a < b) b_score += b;
    else if (a > b) a_score += a;
  }
  cout << max(a_score, b_score) << endl;
}
