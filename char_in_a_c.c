#include <stdio.h>

int main(){
    char c[10];
    int num = 0;
    scanf("%d",&c);
    while (c != EOF) 
    {
        ++num;
    }printf("%d" ,num);
    
}