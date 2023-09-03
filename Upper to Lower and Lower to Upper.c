#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[100];
    int len,i,upper=0,lower=0;
    printf("Input here:");
    gets(a);
    len = strlen(a);
    printf("Length of string:%d\n",len);
    for(i=0; i<len; i++)
    {
        if(islower(a[i]))
        {
            a[i] = a[i]-32;
        }
        else if(isupper(a[i]))
        {
            a[i] = a[i]+32;
        }
    }
    printf("Convert Upper  to lower & Lower to upper: %s\n",a);

    return 0;
}