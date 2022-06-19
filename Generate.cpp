#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

int RandomNumber() { return (rand() % 100); }

struct c_unique {
  int current;
  c_unique() { current = 0; }
  int operator()() { return ++current; }
} UniqueNumber;

int main() {
  srand(unsigned(std::time(0)));

  vector<int> myvector(8);

  generate(myvector.begin(), myvector.end(), RandomNumber);

  cout << "myvector contains:";
  for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';

  generate(myvector.begin(), myvector.end(), UniqueNumber);

  cout << "myvector contains:";
  for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';

  return 0;
}