// 途中

#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

void horizontal_check(const int puzzle[9][9], bool overlap_table[9][9])
{

}

void vertical_check(const int puzzle[9][9], bool overlap_table[9][9])
{

}

void section_check(const int puzzle[9][9], bool overlap_table[9][9])
{

}

int main()
{
  int n;
  cin >> n;
  REP(i, n) {
    int puzzle[9][9];
    REP(k, 9)
      REP(m, 9)
        cin >> puzzle[k][m];
    bool overlap_table[9][9];
    horizontal_check(puzzle, overlap_table);
    vertical_check(puzzle, overlap_table);
    section_check(puzzle, overlap_table);
    REP(row, 9) {
      REP(col, 9) {
        
      }
    }
  }
}
