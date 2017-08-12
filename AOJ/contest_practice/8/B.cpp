// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1154&lang=jp

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  vector<int> a;
  vector<int> b;
  vector<int> c;

  for(int i = 2; i < 300000; i++){
    if(i % 7 == 1 || i % 7 == 6){
      a.push_back(i);
    }
  }

  int len = a.size();
  b.push_back(6);
  for(int i = 1; i < len; i++){
    bool flag = false;
    int s = sqrt(i);
    REP(k, s){
      if(a[i] % a[k] == 0){
        //cout << a[i] << " ! " << a[k] << endl;
        flag = true;
        break;
      }
    }
    if(!(flag)) b.push_back(a[i]);
  }

  //cout << a[0] << endl;

  int n;
  while(cin >> n, n != 1){
    cout << n << ":";
    len = b.size();
    REP(i, len){
      if(n % b[i] == 0){
        cout << " " << b[i];
      }
    }
    cout << endl;
  }


  /*len = b.size();
  REP(i, len){
    cout << b[i] << " ";
  }*/
}
