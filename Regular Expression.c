//string a*b+

#include<stdio.h>
#include<string.h>
int main()
{
    char val[50];
    int state = 0,length,i;
    printf("Input here: ");
    gets(val);
    length = strlen(val);
    printf("Length of string: %d\n",length);

    for(i=0; i<length; i++)
    {
        if(val[i]=='a' && state == 0)
        {
            state = 0;
        }
        else if(state == 0 || state == 1 && val[i]=='b')
        {
            state = 1;
        }
        else if(val[i]!= 'a' || val[i]!= 'b')
        {
            state = 2;
            break;
        }
        else if(state = 1 && val[i]!='b')
        {
            state = 2;
            break;
        }

    }

    if(state == 0 )
    {
        printf("Condition of \"Rule 1\" satisfy this string(a*)");
    }
    else if(state == 1)
    {
        printf("Condition of \"Rule 2\" satisfy this string(a*b+)");
    }
    else if(state == 2)
    {
        printf("Violate the string condition");
    }

    return 0;
}
