#include <iostream>
#include <vector>

using namespace std;
void init(int n, int a[], int b[]) {
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    b[i] = 0;
  }
}
int sum(int a[], int b[], int n) {
  int tmp = 0;
  for (int i = 1; i <= n; i++) {
    if (b[i] == 1) {
      tmp += a[i];
    }
  }
  return tmp;
}

void Binary_Generator(int a[], int b[], int j, int n, vector<int> &list) {

  for (int i = 0; i <= 1; i++) {
    b[j] = i;
    if (j == n) {
      list.push_back(sum(a, b, n));
    } else
      Binary_Generator(a, b, j + 1, n, list);
  }
}
int main() {
  int n, c;
  cin >> c >> n;
  int a[n+1], b[n+1];
  init(n, a, b);
  vector<int> list;
  Binary_Generator(a, b, 1, n, list);
  int max = 0;
  for(int i = 0; i < list.size(); i++){
    if(list[i] <= c&& list[i] > max){
      max = list[i];
    }
  }
  cout<<max;
}
