#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  double five[]      = {35.5,  37.5, 40.0, 43.0, 50.0,  55.0,  70.0};
  double thousand[]  = {71.0,  77.0, 83.0, 89.0, 105.0, 116.0, 148.0};
  string class_str[] = {"AAA", "AA", "A",  "B",  "C",   "D",   "E", "NA"};

  double five_time, thousand_time;
  while(cin >> five_time >> thousand_time) {
    bool check = false;
    REP(i, 7) {
      if(five_time < five[i] && thousand_time < thousand[i]) {
        cout << class_str[i] << endl;
        check = true;
        break;
      }
    }
    if(! check)
      cout << class_str[7] << endl;
  }
  return 0;
}
