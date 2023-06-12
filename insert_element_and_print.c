#include <stdio.h>

int main() {
  int arr[12]; // gievn it an static range to prevent memory leaks and infinite loops while using range

  for (int i =0; i<10; i++) {
    printf("Enter a number for the element to be inserted in the array:  %d: ", i + 1); // gievn  i +`1 to append it
    scanf("%d", &arr[i]);
    printf("\n"); // make it preety
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]); // just to print the contents of the array
  }
}