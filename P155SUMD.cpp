#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
void init(vector<int> &a, vector<int> &b, int n, int m) {
  for (int i = 0; i < n; i++) {
    int tmp = 0;
    cin >> tmp;
    a.push_back(tmp);
  }
  for (int i = 0; i < m; i++) {
    int tmp = 0;
    cin >> tmp;
    b.push_back(tmp);
  }
}
int main() {
  int n, m;
  vector<int> a, b;
  cin >> n >> m;
  init(a, b, n, m);
  sort(a.begin(), a.end());
  for (int i = 0; i < m; i++) {
    cout << lower_bound(a.begin(), a.end(), b[i] + 1) - a.begin() << "\n";
  }
}