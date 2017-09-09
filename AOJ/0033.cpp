#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  cin >> n;
  while (n--) {
    vector<int> v1, v2;
    int work;
    bool flag = true;
    v1.push_back(-1);
    v2.push_back(-1);
    REP(i, 10) {
      cin >> work;
      if (v1.back() < work) v1.push_back(work);
      else if(v2.back() < work) v2.push_back(work);
      else {
        flag = false;
      }
    }
    // for (auto e : v1) {
    //   cout << e << " ";
    // }
    // cout << endl;
    // for (auto e : v2) {
    //   cout << e << " ";
    // }
    // cout << endl;
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}
