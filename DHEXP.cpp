#include <iostream>

typedef long long ll;

using namespace std;

void quickSort(ll arr[], int left, ll right) {
  ll i = left, j = right;
  ll tmp;
  ll pivot = arr[(left + right) / 2];

  while (i <= j) {
    while (arr[i] > pivot)
      i++;
    while (arr[j] < pivot)
      j--;
    if (i <= j) {
      tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
      i++;
      j--;
    }
  };

  if (left < j)
    quickSort(arr, left, j);
  if (i < right)
    quickSort(arr, i, right);
}

int main() {
  ll n = 0;
  ll k = 0;
  cin >> n >> k;
  ll arr[100005];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  quickSort(arr, 1, n - 1);

  ll sum = arr[0];
  for (int i = 1; i <= k; i++) {
    sum += arr[i];
  }

  for (int i = k + 1; i < n; i++) {
    sum -= arr[i];
  }

  cout << sum << endl;
}
