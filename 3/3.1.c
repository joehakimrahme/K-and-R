// TODO(jhakimra): do it.

#include <stdio.h>

int binsearch(int x, int v[], int n);
int binsearch_iter(int x, int v[], int low, int high);

int binsearch2(int x, int v[], int n);

int main() {
  int input[] = {1, 3, 4, 5, 6, 7, 8, 66};
  printf("%d\n", binsearch(5, input, 8));
  return 0;
}

int binsearch(int x, int v[], int n) {
    return binsearch_iter(x, v, 0, n);
}
int binsearch_iter(int x, int v[], int low, int high) {
  int mid = (low + high) / 2;
  if (v[mid] < x) {
    return binsearch_iter(x, v, mid+1, high);
  } else if (v[mid] > x) {
    return binsearch_iter(x, v, low, high-1);
  } else {
    return mid;
  }
}

int binsearch2(int x, int v[], int n) {
  int low=0, high=n-1;
  int mid;

  while (low<high) {
    mid=(low+high)/2;
    if (v[mid]
}
