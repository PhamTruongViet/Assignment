#include <iostream>
#include <vector>

using namespace std;
int n;
int a[11], b[11], c[11];
vector<int> list;

void init() {
  for (int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i];
  }
}
int Diff_a_b() {
  int multi_a = 1, sum_b = 0;
  for (int i = 1; i <= n; i++) {
    if (c[i] == 1) {
      multi_a *= a[i];
      sum_b += b[i];
    }
  }
  return abs(multi_a - sum_b);
}
void Binary_Generator(int j) {
  for (int i = 0; i <= 1; i++) {
    c[j] = i;
    if (j == n) {
      list.push_back(Diff_a_b());
    } else {
      Binary_Generator(j + 1);
    }
  }
}
int main() {

  cin >> n;

  init();
  Binary_Generator(1);
  int min = 9999999;
  for (int i = 1; i < list.size(); i++) {
    if (min > list[i]) {
      min = list[i];
    }
  }
  cout << min;
}
