#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
int main() {
  std::vector<std::string> a = {"suraj", "aman", "vanshika", "chhavi"};
  std::vector<std::string> b(4);
  std::cout << "Move function.\n";
  std::move(a.begin(), a.begin() + 4, b.begin());
  std::cout << "a contains " << a.size() << " elements:";
  std::cout << " (The state of which is valid.)";
  std::cout << '\n';
  std::cout << "b contains " << b.size() << " elements:";
  for (std::string &x : b)
    std::cout << " [" << x << "]";
  std::cout << '\n';
  std::cout << "Moving the conatiner a...\n";
  a = std::move(b);
  std::cout << "a contains " << a.size() << " elements:";
  for (std::string &x : a)
    std::cout << " [" << x << "]";
  std::cout << '\n';
  std::cout << "b is in valid state";
  std::cout << '\n';
  return 0;
}