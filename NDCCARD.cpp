#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
void findSum3Card(vector<int> a, int m) {
  int max = 0;
  for (int i = 0; i < a.size() - 2; i++) {
    int left = i + 1, right = a.size() - 1;
    while (left < right) {
      int sum = a[i] + a[left] + a[right];
      if (sum == m) {
        cout << m << endl;
        return;
      }
      if (sum < m && sum > max) {
        max = sum;
      }
      if (sum < m) {
        left++;
      } else {
        right--;
      }
    }
  }
  cout << max << endl;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  sort(a.begin(), a.end());
  findSum3Card(a, m);
}
