#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int main()
{
  string str;
  while (getline(cin, str)) {
    vector<double> number;
    vector<string> ope;
    stringstream ss;
    string factor;
    ss << str;
    while (ss >> factor) {
      if (isdigit(factor[0])) {
        number.push_back(stoi(factor));
      } else {
        if (factor[0] == '-' && factor.size() != 1) {
          if (isdigit(factor[1])) {
            string num_str;
            for (int i = 1; i < factor.size() + 1; i++) {
              num_str += factor[i];
            }
            number.push_back(stoi(num_str) * -1);
            continue;
          }
        }
        double num1 = number.back(); number.pop_back();
        double num2 = number.back(); number.pop_back();
        switch (factor[0]) {
          case '+':
            number.push_back(num2 + num1);
            break;
          case '-':
            number.push_back(num2 - num1);
            break;
          case '*':
            number.push_back(num1 * num2);
            break;
          case '/':
            number.push_back(num2 / num1);
            break;
        }
      }
    }
    printf("%f\n", number.back());
  }
}
