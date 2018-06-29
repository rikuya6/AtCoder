#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int main() {
  string s;
  cin >> s;
  const vector<string> keyboards = {
    "WBWBWWBWBWBWWBWBWWBW", // Do
    "WBWWBWBWBWWBWBWWBWBW", // Re
    "WWBWBWBWWBWBWWBWBWBW", // Mi
    "WBWBWBWWBWBWWBWBWBWW", // Fa
    "WBWBWWBWBWWBWBWBWWBW", // So
    "WBWWBWBWWBWBWBWWBWBW", // La
    "WWBWBWWBWBWBWWBWBWWB"  // Si
  };
  const vector<string> outs = {
    "Do",
    "Re",
    "Mi",
    "Fa",
    "So",
    "La",
    "Si"
  };
  REP(i, 7) {
    if (keyboards[i] == s) {
      cout << outs[i] << endl;
    }
  }
}
