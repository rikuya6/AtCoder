#include <iostream>
#include <algorithm>
using namespace std;

int game() {
  int score = 301;
  for (int i = 0; i < 10; ++i) {
    int nscore = score;
    for (int k = 0; k < 3; ++k) {
      int s;
      cin >> s;
      if (nscore > s) {
        nscore -= s;
      } else if (nscore < s) {
        nscore = score;
      } else if (nscore == s) {
        return i + 1;
      }
    }
    score = nscore;
    // cout << score << endl;
  }
  return 0;
}

int main() {
  cout << game() << endl;
}
