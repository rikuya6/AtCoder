#include <iostream>
using namespace std;

int main() {
  int n_sum, sum{};
  cin >> n_sum;
  for (int i = 0; i < 9; ++i) {
    int v;
    cin >> v;
    sum += v;
  }
  cout << n_sum - sum << endl;
}
