#include <iostream>
using namespace std;

void ChristmasTreePattern(int width, int height, char ch) {
  int space = width * height;
  int i, j, k, n = 1;

  for (int x = 1; x <= height; x++) {
    for (i = n; i <= width; i++) {
      for (j = space; j >= i; j--) {
        cout << " ";
      }
      for (k = 1; k <= i; k++) {
        cout << ch << " ";
      }
      cout << "\n";
    }
    n = n + 2;
    width = width + 2;
  }
  for (i = 1; i <= height - 1; i++) {
    for (j = space - 3; j >= 0; j--) {
      cout << " ";
    }
    for (k = 1; k <= height - 1; k++) {
      cout << ch << " ";
    }
    cout << "\n";
  }
}

int main() {
  int width, height, i, j, k, n = 1;
  char ch;

  cout << "\nEnter Character for Christmas Tree Pattern = ";
  cin >> ch;

  cout << "Please Enter Christmas Tree Width & Height = ";
  cin >> width >> height;

  int space = width * height;

  cout << "Printing Christmas Tree Pattern of Stars\n";
  ChristmasTreePattern(width, height, ch);
}