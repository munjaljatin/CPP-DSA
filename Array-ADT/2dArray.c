#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  /* code */
  int *A[3];
  A[0] = (int *)malloc(4 * sizeof(int));
  A[1] = (int *)malloc(4 * sizeof(int));
  A[2] = (int *)malloc(4 * sizeof(int));
  return 0;
}
