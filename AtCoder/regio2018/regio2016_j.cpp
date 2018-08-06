#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int h[n + 1];
  for (int i = 0; i < n + 1; i++) cin >> h[i];
  for (int i = 0; i < n + 1; i++) {
    // check_arrに雑草が含まれているときは、checkはfalseとなる。trueであるときcheck_arrに雑草は含まれていない。よって、h[i]が雑草である。
    int check_arr[n];
    bool check = true;
    for (int k = 0, pos = 0; k < n + 1; k++)
      if (i != k) check_arr[pos++] = h[k];
    // for(int k = 0; k < n; k++) cout << check_arr[k] << " ";
    // cout << endl;
    for (int k = 1; k < n - 1; k++) {
      int diff1 = check_arr[1] - check_arr[0],
          diff2 = check_arr[k + 1] - check_arr[k];
      if (check_arr[0] >= check_arr[1]) {
        check = false;
        break;
      }
      if (diff1 != diff2) {
        // cout << "diff1 " << diff1 << " " << diff2 << endl;
        check = false;
        break;
      }
    }
    if (check) {
      cout << h[i] << endl;
      break;
    }
  }
}
