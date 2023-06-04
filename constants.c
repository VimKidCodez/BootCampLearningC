#include <stdio.h>

int main()
{
    char c[10] = 'Hello';
    const c;
     
    //char c[10] = 'gggh'; // this  commented code willnot work as it is constant
    printf("%s",c);
}