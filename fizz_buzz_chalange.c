#include <stdio.h>

// Write a program to accomplish the fizz buzz chalange

int main(){
    int i ;
    printf("\nEnter a number: ");
    scanf("%d",&i);
    if (i == 0){
        printf("Buzz\n");}
    else if (i == 1){
        printf("Fuzz\n");}
    
    else{
        printf("Duzz\n");
    }
    
    
}