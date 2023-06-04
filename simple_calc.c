#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(){
    int i=0;
    while (i==0){
        int j, num,nump, sum, sub ;
        printf("Enter 1 to add 2 to subtract and 3 to exit");
        scanf("%d",&j);
        if (j==1){
            printf("Enter the number: \n");
            scanf("%d",&nump);
            printf("Enter the number: \n");
            scanf("%d",&num);
            int c = num+nump;
            printf("the sum is %d",c); 
            printf("\n");}
        
        else if (j==2){
            printf("Enter the number: \n");
            scanf("%d",&nump);
            printf("Enter the number: \n");
            scanf("%d",&num);
            int c = nump-num;
            printf("the subtracted num is %d",c); 
            printf("\n");}

        else if (j==3){
           return EINVAL;

        }

        }
    } 
