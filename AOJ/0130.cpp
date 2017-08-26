#include <iostream>
#include <string>
#include <deque>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int n;
  cin >> n;
  string str;
  while (n--) {
    cin >> str;
    deque<char> que;
    que.push_back(str[0]);
    // cout << "i:";
    // for (auto& it : que) {
    //   cout << it;
    // }
    // cout << endl;
    auto it = que.begin();
    for (int i = 1; i < str.size(); i+=3) {
      if (str[i] == '-') {
        ++it;
        if (it == que.end()) que.push_back(str[i + 2]);
      } else {
        if (it == que.begin()) {
          que.push_front(str[i + 2]);
          it = que.begin();
        }else{
          --it;
          // cout << "it " << *it << endl;
        }
      }
    }
    for (auto& it : que) {
      cout << it;
    }
    cout << endl;
  }
  return 0;
}
