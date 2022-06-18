#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <random>
#include <vector>

using namespace std;

int main() {
  vector<int> v(10);
  iota(v.begin(), v.end(), 0);

  cout << "before: ";
  copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
  cout << endl;

  random_device seed_gen;
  mt19937 engine(seed_gen());
  shuffle(v.begin(), v.end(), engine);

  cout << " after: ";
  copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
  cout << endl;

  return 0;
}