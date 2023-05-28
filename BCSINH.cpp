#include <iostream>

using namespace std;

int arr[10] = {0};
bool stop = false;
void print(int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  } 
  cout << endl;
}
void Binary_Generator(int n) {
  int i = n - 1;
  while (arr[i] == 1 && i >= 0) {
    arr[i] = 0;
    i--;
  }
  if (i < 0) stop = true;
  else arr[i] = 1;
}
int main() {
  int n;
  cin >> n;

  while (!stop) {
    print(n);
    Binary_Generator(n);
  }
}
