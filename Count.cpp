#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int newints[] = {50, 60, 70, 70, 60, 50, 50, 60};
  int newcount = std::count(newints, newints + 8, 50);
  std::cout << "50 appear " << newcount << "times.\n";
  std::vector<int> newvector(newints, newints + 8);
  newcount = std::count(newvector.begin(), newvector.end(), 70);
  std::cout << "70 appear " << newcount << "times.\n";
  return 0;
}