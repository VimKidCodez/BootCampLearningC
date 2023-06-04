#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    printf("%d\n",rand()); // generates a random number thats not defined

    int i, num;
    num = rand() % 100 + 1; // generates a random number
    printf("%d\n",num); 

    int j , number;
    for (j = 1; j <= 10; j++){
        number = rand() % 100 + 1;
        printf("%d\n",number);
    }


}