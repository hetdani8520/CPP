//Write a function to extract ‘k’ bits from a given position ‘p’ in a number(num)?
#include <iostream>
#using namespace std;

int extractbits(int num, int k, int p) {
  // extract k bits from p position of number num
  // num = 15 --> 1111
  // k=2
  // p=1 (index into num & position 1 means index 0)
  return ((num >> (p - 1)) & ((1 << k) - 1));
}

int main() {
  int num = 14;
  int k = 2;
  int p = 1;
  extractbits(num, k, p);
  cout << "Extracted bits of " << num << "are " << extractbits(num, k, p);
  return 0;
}
