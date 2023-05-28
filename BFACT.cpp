#include <iostream>
using namespace std;
long long factorial(long long n) {
  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}
int main() {
  long long n;
  while (cin >> n) {
    if (n == 0)
      return 0;
    cout << factorial(n) << endl;
  }
}