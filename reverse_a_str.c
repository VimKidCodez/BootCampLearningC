#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char* str);
int main()
{
    char str [256];
    strcpy_s(str, "Hello World");
    printf(str);
    reverseString(str);
    return 0;
}
void reverseString(char* str)
{
    int i, j;
    char temp;
    i=j=temp=0;

    j=strlen(str)-1;
    for (i=0; i<j; i++, j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf(str);
}
