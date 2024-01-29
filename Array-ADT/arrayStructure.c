#include <stdio.h>
#include <stdlib.h>

// structure of an array in c
struct Array {
  int *A;
  int size;
  int length;
};

void inputArray(struct Array *ptr, int length) {
  // for taking the input from the user and then storing the values inside the
  // actual array
  printf("\nEnter the %d elements in the array\n", length);
  for (int i = 0; i < length; i++) {
    scanf("%d", &ptr->A[i]);
    ptr->length++;
  }
}

void displayArray(struct Array arr) {
  for (int i = 0; i < arr.length; i++) {
    printf("%d ", arr.A[i]);
  }
}

void appendElement(struct Array *arr, int ele) {
  if (arr->length < arr->size) {
    arr->A[arr->length] = ele;
    arr->length++;
  }
}

int main(int argc, char const *argv[]) {
  /* code */
  struct Array arr;
  int num;
  printf("Enter the size of array:-) ");
  scanf("%d", &arr.size);
  arr.A = (int *)malloc(arr.size * sizeof(int));
  arr.length = 0;
  printf("Enter the number of numbers\n");
  scanf("%d", &num);
  inputArray(&arr, num);
  displayArray(arr);
  printf("\n");
  appendElement(&arr, 34);
  displayArray(arr);
  return 0;
}
