//Check uppercase,lowercase,digit,special character,space
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[100];
    int len,i,upper=0,lower=0,special=0,numaric_value=0,space=0;
    printf("Input here:");
    gets(a);
    len = strlen(a);
    printf("Length of string:%d\n",len);
    for(i=0; i<len; i++)
    {
        if(isupper(a[i]))
        {
            upper++;
        }
        else if(islower(a[i]))
        {
            lower++;
        }
        else if(a[i]==' ')
        {
            space++;
        }
        else if(a[i]>='0' && a[i]<='9')
        {
            numaric_value++;
        }
        else
        {
            special++;
        }
    }
    printf("Upper Character: %d\n",upper);
    printf("Lower Character: %d\n",lower);
    printf("Space: %d\n",space);
    printf("Digit: %d\n",numaric_value);
    printf("Special: %d\n",special);


    return 0;
}