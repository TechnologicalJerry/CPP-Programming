#include <algorithm>
#include <iostream>
using namespace std;

bool comp(int a, int b) { return (a < b); }
int main() {
  int a = 7;
  int b = 28;

  cout << max(a, b, comp) << "\n";

  cout << max(7, 7, comp);

  return 0;
}