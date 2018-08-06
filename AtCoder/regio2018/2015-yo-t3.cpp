#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> v(h);
  for (int i = 0; i < h; ++i) cin >> v[i];
  for (int i = 0; i < h; ++i) {
    int c = -1;
    for (int k = 0; k < w; ++k) {
      if (v[i][k] == 'c') {
        c = 0;
      } else if (c != -1){
        ++c;
      }
      if (k != w - 1)
        cout << c << " ";
      else
        cout << c << endl;
    }
  }
}
