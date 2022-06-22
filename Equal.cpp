#include <bits/stdc++.h>
using namespace std;
int main() {
  int u1[] = {10, 20, 30, 40, 50};
  std::vector<int> vec_1(u1, u1 + sizeof(u1) / sizeof(int));
  std::cout << "The vector consists of:";
  for (unsigned int k = 0; k < vec_1.size(); k++)
    std::cout << " " << vec_1[k];
  std::cout << "\n";
  if (std::equal(vec_1.begin(), vec_1.end(), u1))
    std::cout << "Both the containers have equal elements.\n";
  else
    cout << "Both containers have different elements.";
}