#include <iostream>
using namespace std;

void rev(int a[], int l, int r) {
    if (l >= r) return;
    swap(a[l], a[r]);
    rev(a, l + 1, r - 1);
}

int main() {
    int n; cin >> n;
    int a[n];
/*for filling the array*/
    for (int i = 0; i < n; i++) cin >> a[i];

    rev(a, 0, n - 1);
/*for printing the array*/
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}