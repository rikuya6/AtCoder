// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2012

#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

long long table[3][1000000];

int main()
{
  int x, y, z, m;
  int idx, idx2;
  int data;
  int size = 500;
  table[0][0] = 0;  table[1][0] = 0;  table[2][0] = 0;
  table[0][1] = 1;  table[1][1] = 1;  table[2][1] = 1;
  for(int i = 2; i < size; i++){
    table[0][i] = i;
    //cout << "table[0][" << i << "]:" << table[0][i] << endl;
  }
  for(int i = 2; i < size; i++){
    table[1][i] = i * i;
  }
  for(int i = 2; i < size; i++){
    table[2][i] = i * i * i;
    //cout << "table[2][" << i << "]:" << table[2][i] << endl;
  }

  while(cin >> data, data){
    z = data;
    //cout << "z:" << z << endl;
    m = size + 500;
    for(int i = size - 1; i >= 0; i--){
      if(table[2][i] == data){
        m = i;
        break;
      }
      if(z >= table[2][i]){
        z = table[2][i];
        idx = i;
        //cout << "z:" << z << " table[2][" << i << "]:" << table[2][i] << endl;
      }else{
        continue;
      }
      y = data - z;
      for(int k = size - 1; k >= 0; k--){
        if(y >= table[1][k]){
          y = table[1][k];
          idx2 = k;
          x = data - z - y;
          if(m > (idx + idx2 + x))
            m = idx + idx2 + x;
            //cout << m << " = " << idx << " + " << idx2 << " + " << x << endl;
        }
      }
    }
    cout << m << endl;
  }
}
