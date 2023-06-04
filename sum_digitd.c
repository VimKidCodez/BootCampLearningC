#include <stdio.h>

int main(){
    int j , n , sum = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while (n>0){
        j = n%10;
        sum = sum + j;
        n = n/10;
    }
    printf("%d\n",sum);


}