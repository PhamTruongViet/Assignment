#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

long long fib(long long n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return (fib(n - 1) % MOD + fib(n - 2) % MOD) % MOD;
}

int main() {
  int n;
  cin >> n;
  cout << fib(n);
  return 0;
}
