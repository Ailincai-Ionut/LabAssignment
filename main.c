#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
// Write a function that takes as an input an array of integer numbers(both
// positive and negative numbers)  and returns the value of the triplet with the
// maximum product, as well as the elements that form this triplet. Use pass by
// pointer / address to return the elements that form that triplet. In the main
// function, you will first read the size of the array n, and then n integers
// representing the elements in the array.

// TODO: This version is not finished and is utterly bullshit
/*
long long findTriplet2(int *arr, int n, int *t1, int *t2, int *t3) {
  if (n < 3) {
    printf("The array has less than 3 elements. Application will now stop.\n");
    return 0;
  }

  int max3[3] = {INT_MIN, INT_MIN, INT_MIN},
      min3[3] = {INT_MAX, INT_MAX, INT_MAX};
  int indexmax = 0, indexmin = 0;
  for (int i = 0; i < 3; i++) {
    int lmin = INT_MAX, lmax = INT_MIN;
    for (int j = 0; j < n; j++) {
      if (lmin > arr[j]) {
        int valid = 1;
        for (int k = 0; k < indexmin; k++)
          ;
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    printf("%i %i\n", max3[i], min3[i]);
  }
}
*/

long long findTriplet(int *arr, int n, int *t1, int *t2, int *t3) {
  long long product = arr[0] * arr[1] * arr[2];
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++)
      for (int k = j + 1; k < n; k++)
        if (arr[i] * arr[j] * arr[k] > product) {
          product = arr[i] * arr[j] * arr[k];
          *t1 = arr[i];
          *t2 = arr[j];
          *t3 = arr[k];
        }
  }
  return product;
}

int main() {
  int a[100], n, t1, t2, t3;

  scanf("%d ", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", a + i);

  if (n < 3) {
    printf("Invalid input! Application will now stop\n");
    return 0;
  }
  long long product = findTriplet(a, n, &t1, &t2, &t3);
  int t;
  if (t1 > t2) {
    t = t2;
    t2 = t1;
    t1 = t;
  }
  if (t1 > t3) {
    t = t3;
    t3 = t1;
    t1 = t;
  }
  if (t2 > t3) {
    t = t3;
    t3 = t2;
    t2 = t;
  }
  printf("The triplet with the maximum product %lld is (%i, %i, %i)\n", product,
         t1, t2, t3);

  return 0;
}
