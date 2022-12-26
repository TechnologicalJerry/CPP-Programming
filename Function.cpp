#include <iostream>
using namespace std;

void function();

void secondFunction();

int main() {

  function();

  secondFunction();

  cout << "Hello from main()\n";

  function();

  return 0;
}

void function() { cout << "Hello from function()" << endl; }

void secondFunction() { cout << "Hello, This is from secondFunction()"; }
