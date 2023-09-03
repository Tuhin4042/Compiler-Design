#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int length;
    printf("Input Here: ");
    gets(x);
    length = strlen(x);
    printf("\nLength of string: %d",length);
    if(x[0]=='/' && x[1]=='/')
    {
        printf("\nSingle Line comment is found in this string.");
    }
    else if(x[0]=='/' && x[1]=='*' && x[length-1]=='/' && x[length-2]=='*')
    {
        printf("\nMultiple Line comment is found in this string.");
    }
    else
    {
        printf("\nComment not found in this string.");
    }
    return 0;
}