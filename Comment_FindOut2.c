#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int length,i;
    printf("Input Here: ");
    gets(x);
    length = strlen(x);
    printf("Length of string: %d",length);

    for(i=0;i<=length;i++)
    {
        if(x[i]=='/' && x[i+1]=='/')
        {
            printf("\nSingle line comment is found in this string.");
            printf("\nCommet: %c%c",x[i],x[i+1]);
            break;
        }
        else if (x[i]=='/' && x[i+1]=='*' && x[length-1]=='/' && x[length-2]=='*')
        {
            printf("\nMultiple line comment is found in this string.");
            printf("\nCommet: %c%c%c%c",x[i],x[i+1],x[length-2],x[length-1]);
            break;
        }
        else
        {
            printf("\nComment not found.");
        }
        
    }
    return 0 ;

}