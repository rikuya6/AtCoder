#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  string a, b;
  cin >> a >> b;
  if(a.length() < b.length()) {
    cout << "LESS" << endl;
  }else if(a.length() > b.length()) {
    cout << "GREATER" << endl;
  }else{
    bool check = false;
    REP(i, a.length()) {
      if(a[i] < b[i]) {
        cout << "LESS" << endl;
        check = true;
        break;
      }else if(a[i] > b[i]) {
        cout << "GREATER" << endl;
        check = true;
        break;
      }
    }
    if(!check) cout << "EQUAL" << endl;
  }
}
