#include <stdio.h>

void speed_function(a,b){
    return a/b; // returns ilt as it is seen as clean cdoe
}

int main(){
    //Write a program to find speed
    int t, s;
    printf("Enter time ");
    scanf("%d",&t);
    printf("\n");
    printf("Enter distance ");
    scanf("%d",&s);
    speed_function(s,t);
    
    }