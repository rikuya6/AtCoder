#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int h, w;
  string a;
  cin >> h >> w;
  REP(i, w + 2)
    cout << "#";
  cout << endl;
  REP(i, h){
    cout << "#";
    cin >> a;
    cout << a;
    cout << "#" << endl;
  }
	REP(i, w + 2)
		cout << "#";
  cout << endl;
}
