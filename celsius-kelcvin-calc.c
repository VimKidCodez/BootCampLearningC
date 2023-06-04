#include <stdio.h>

int main()
{
    int choice;
    int user_value ;
    int sum ;

    printf("Enter 1 for celsius to kelvim , enter 2 fo kelvim to celsius");
    scanf("%d",&choice);

    if (choice == 1){
        printf("enter value ");
        scanf("%d\n",&user_value);

        int sum = user_value + 273;

        printf("%d\n",&sum);
        return 0;
    }

}