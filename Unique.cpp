#include <algorithm>
#include <functional>
#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

bool mod_equal(int elem1, int elem2) {
  if (elem1 < 0)
    elem1 = -elem1;
  if (elem2 < 0)
    elem2 = -elem2;
  return elem1 == elem2;
};

int main() {
  vector<int> v1;
  vector<int>::iterator v1_Iter1, v1_Iter2, v1_Iter3, v1_NewEnd1, v1_NewEnd2,
      v1_NewEnd3;

  int i;
  for (i = 0; i <= 3; i++) {
    v1.push_back(5);
    v1.push_back(-5);
  }

  int ii;
  for (ii = 0; ii <= 3; ii++) {
    v1.push_back(4);
  }
  v1.push_back(7);

  cout << "Vector v1 is ( ";
  for (v1_Iter1 = v1.begin(); v1_Iter1 != v1.end(); v1_Iter1++)
    cout << *v1_Iter1 << " ";
  cout << ")." << endl;

  v1_NewEnd1 = unique(v1.begin(), v1.end());

  cout << "Removing adjacent duplicates from vector v1 gives\n ( ";
  for (v1_Iter1 = v1.begin(); v1_Iter1 != v1_NewEnd1; v1_Iter1++)
    cout << *v1_Iter1 << " ";
  cout << ")." << endl;

  v1_NewEnd2 = unique(v1.begin(), v1_NewEnd1, mod_equal);

  cout << "Removing adjacent duplicates from vector v1 under the\n "
       << " binary predicate mod_equal gives\n ( ";
  for (v1_Iter2 = v1.begin(); v1_Iter2 != v1_NewEnd2; v1_Iter2++)
    cout << *v1_Iter2 << " ";
  cout << ")." << endl;

  v1_NewEnd3 = unique(v1.begin(), v1_NewEnd2, greater<int>());

  cout << "Removing adjacent elements satisfying the binary\n "
       << " predicate mod_equal from vector v1 gives ( ";
  for (v1_Iter3 = v1.begin(); v1_Iter3 != v1_NewEnd3; v1_Iter3++)
    cout << *v1_Iter3 << " ";
  cout << ")." << endl;

  return 0;
}