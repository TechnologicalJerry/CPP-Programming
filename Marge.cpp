#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> stack1 = {50, 20, 10, 100, 200};
  vector<int> stack2 = {500, 2000, 5000, 1000, 10000};
  vector<int> stack3(10);
  cout << "The original 1st stack: ";
  for (int i = 0; i < 5; i++)
    cout << stack1[i] << " ";
  cout << endl;
  cout << "The original 2nd stack: ";
  for (int i = 0; i < 5; i++)
    cout << stack2[i] << " ";
  cout << endl;
  sort(stack1.begin(), stack1.end());
  sort(stack2.begin(), stack2.end());
  merge(stack1.begin(), stack1.end(), stack2.begin(), stack2.end(),
        stack3.begin());
  cout << "The resultant stack of notes is: ";
  for (int i = 0; i < stack3.size(); i++)
    cout << stack3[i] << " ";
  return 0;
}