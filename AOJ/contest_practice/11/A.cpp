#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  string in;
  string left_key_list = "qwertasdfgzxcvb";
  string right_key_list = "yuiophjklnm";

  while(true) {
    cin >> in;
    if(in == "#") break;
    bool left = false, right = false;
    int cnt = -1;
    for(char& ch : in) {
      REP(i, left_key_list.size()) {
        if(ch == left_key_list[i]) {
          if(!left) cnt++;
          left = true;
          right = false;
          break;
        }
      }
      REP(i, right_key_list.size()) {
        if(ch == right_key_list[i]) {
          if(!right) cnt++;
          left = false;
          right = true;
          break;
        }
      }
    }
    cout << cnt << endl;
  }
}
