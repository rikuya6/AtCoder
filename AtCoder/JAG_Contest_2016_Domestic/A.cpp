#include <iostream>
#include <string>
#include <stack>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  stack<string> st;
  string s;
  bool flg = true;
  cin >> n;
  REP(i, n) {
    cin >> s;
    if(s == "A") {
      st.push(s);
    }else{
      if(!st.empty()) {
        if(st.top() == "A") {
          st.pop();
        }else{
          flg = false;
        }
      }else{
        flg = false;
      }
    }
  }
  if(!st.empty()) flg = false;
  if(flg)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
