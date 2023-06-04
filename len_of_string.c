#include <string.h>
#include <stdio.h>

int main(){
    char ster[20];
    int i;
    scanf("%s",&ster);
    for(i=0;ster[i] != '\0';i++){ // NULL isn't allowed 
        printf("%d",&i);
    }

    printf("%d",i);
}