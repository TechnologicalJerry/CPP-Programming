#include <algorithm>
#include <iostream>
#include <vector>
int main() {
  int newints[] = {15, 25, 35, 45, 55, 65, 75};
  std::vector<int> newvector(7);
  std::copy(newints, newints + 7, newvector.begin());
  std::cout << "newvector contains:";
  for (std::vector<int>::iterator ti = newvector.begin(); ti != newvector.end();
       ++ti)
    std::cout << " " << *ti;
  std::cout << "\n";
  return 0;
}