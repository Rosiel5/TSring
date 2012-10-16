#include "TString.h"
#include <iostream>

using namespace std;


void main()
{
  TString test("Hello World!");
  test = IntToTString(5);

  std::cout << test.GetLength();

  int a = 0;
  std::cin >> a;
}