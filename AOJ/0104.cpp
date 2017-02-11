#include<iostream>
#include<string>

using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)
char tile[101][101];

void move()
{
  int row = 0, col = 0;
  bool flag[101][101];
  REP(i, 101)
    REP(j, 101)
      flag[i][j] = false;
  while(true){
    switch(tile[row][col]){
    case '>':
      col++;
      // cout << '>' << endl;
      break;
    case '<':
      col--;
      // cout << '<' << endl;
      break;
    case '^':
      row--;
      // cout << '^' << endl;
      break;
    case 'v':
      row++;
      // cout << 'v' << endl;
      break;
    case '.':
      // cout << '.' << endl;
      cout << to_string(col) + " " + to_string(row) << endl;
      return;
    }
    if(flag[row][col]){
      cout << "LOOP" << endl;
      break;
    }else{
      flag[row][col] = true;
    }
  }
  return;
}


int main()
{
  int h, w;
  while(cin >> h >> w && h && w){
    REP(i, h)
      REP(k, w)
        cin >> tile[i][k];
    move();
  }
  return 0;
}
