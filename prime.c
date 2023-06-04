#include<stdio.h>  
    int main(){    
        int number,i,m=0,flag=0;    
        printf("Enter the number to check prime: ");    
        scanf("%d",&number);      
        m=number/2;    
        for(i=2;i<=m;i++)    
        {    
            if(number%i==0)    
            {    
                printf("Number is not prime");    
                flag=1;     
                break;    
            }    
        }    
        if(flag==0)    
        printf("Number is prime");     
        return 0;  
         }  
 
