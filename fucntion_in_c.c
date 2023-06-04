#include <stdio.h>

void adld(int num, int numa);
int main() {

    adld(1,2);
}

void adld(int num,int numa){
    int n = num + numa;
    printf("%d",n);

}
