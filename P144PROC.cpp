#include <iostream>
using namespace std;
typedef unsigned long long ull;

const int MOD = 1e9 + 7;

ull pow_mod(ull a, ull b) {
  if (b == 0)
    return 1;
  if (b == 1)
    return a;
  if(b % 2 == 0)
    return pow_mod((a * a) % MOD, b / 2);
  else
    return (a * pow_mod((a * a) % MOD, b / 2)) % MOD;
}

int main() {
  ull a, b;
  while (cin >> a >> b) {
    if (a == b && a == 0)
      return 0;
    cout << pow_mod(a, b) << endl;
  }
  return 0;
}
