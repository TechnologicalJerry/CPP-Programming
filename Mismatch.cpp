#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
bool comp(int c, int d) { return (c > d); }
int main() {
  vector<int> u1 = {23, 13, 15, 20};
  vector<int> u2 = {1, 10, 25, 30, 45};
  vector<int> u3 = {12, 100, 152, 204};
  vector<int> u4 = {1, 10, 15, 20, 24};
  pair<vector<int>::iterator, vector<int>::iterator> unpair;
  unpair = mismatch(u1.begin(), u1.end(), u2.begin());

  cout << "From the first container the element that does not match is: ";
  cout << *unpair.first << endl;
  cout << " From the second container the element that does not match "
          "container is: ";
  cout << *unpair.second << endl;
  unpair = mismatch(u3.begin(), u3.end(), u4.begin());
  cout << "From first container return value is:";
  cout << *unpair.first << endl;
  cout << " From second container return value is: ";
  cout << *unpair.second << endl;
}