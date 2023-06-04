#include <stdio.h>

int main(){
    int num = 0,i=0;
    scanf("%d",&num);
    while(num!=0){
        num = num/10;
         i++;
        }   
    printf("%d",i);
}