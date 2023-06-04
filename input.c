#include <stdio.h>

int main()
{
    int c;
    getchar("%d", &c);
    while (c != EOF){
        printf("%d", c);
    }

}