#include <iostream>
#include <string>

using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  int year, month, day;

  while (cin >> year >> month >> day) {
     int date = year * 10000 + month * 100 + day;
     if (date < 18680908)
         cout << "pre-meiji" << endl;
     else if (date < 19120730)
         cout << "meiji " << year - 1867 << " " << month << " " << day << endl;
     else if (date < 19261225)
         cout << "taisho " << year - 1911 << " " << month << " " << day << endl;
     else if (date < 19890108)
         cout << "showa " << year - 1925 << " " << month << " " << day << endl;
     else
         cout << "heisei " << year - 1988 << " " << month << " " << day << endl;
  }
  return 0;
}
