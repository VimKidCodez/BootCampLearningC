#include <stdio.h>
#include <stdlib.h>

int main(){
    // Write a program to insert an num in an array and print it out 
    int a[] = {};
    printf("Enter a number to be inserted in the array.");
    int i ;
    scanf("%d",&i);
    // now the size of the array in required
    size_t size = sizeof(a)/sizeof(a[0]);
    printf("%d",size);
    int m  = size +1;
    a[m] = i;  
    printf("\n%d\n",&a);


}

