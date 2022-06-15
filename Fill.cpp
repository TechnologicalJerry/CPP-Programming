#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &v) {
  vector<int>::const_iterator i;
  for (i = v.begin(); i != v.end(); i++) {
    cout << setw(2) << *i << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector<int> v(arr, arr + sizeof(arr) / sizeof(int));

  cout << "Vector before fill" << endl;
  print(v);
  fill(v.begin() + 4, v.end() - 3, -1);
  cout << "Vector after fill" << endl;
  print(v);
}