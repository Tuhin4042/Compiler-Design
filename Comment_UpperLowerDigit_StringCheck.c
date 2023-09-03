//String: [A-Z]*[a-z]+[0-9]*

#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100];
    printf("Input string: ");
    gets(str);
    int len =  strlen(str);

    int i,upper=0,lower=0,digit=0,state = 1;

    for(i=0; i<len; i++)
    {
        if(isupper(str[i]))
        {
            upper++;
        }
        else if(islower(str[i]))
        {
            lower++;
        }
        else if(str[i]>= '0' && str[i]<= '9')
        {
            digit++;
        }
    }
    printf("upper case: %d\n",upper);
    printf("Lower case: %d\n",lower);
    printf("Digit case: %d\n",digit);


    if(str[0]== '/' && str[1]== '/' )
    {
        printf("Single line comment found in this string\n");

        for(i=2; i<len; i++)
        {
            if(state==1 && str[i]>='A' && str[i]<='Z')
            {
                state =1;
            }
            else if((state ==1 || state ==2) && (str[i]>='a' && str[i]<='z'))
            {
                state = 2;
            }
            else if( state==2 && str[i]>='0' && str[i]<='9')
            {
                state = 3;
            }
            else
            {
                state = 0;
            }
        }

    }

    else if(str[0]=='/' && str[1] == '*' && str[len-1]== '/' && str[len-2]=='*')
    {
        printf("Multiple line comment found in this string\n");

        for(i=2; i<len-2; i++)
        {
            if(state==1 && str[i]>='A' && str[i]<='Z')
            {
                state =1;
            }
            else if((state ==1 || state ==2) && (str[i]>='a' && str[i]<='z'))
            {
                state = 2;
            }
            else if( state==2 && str[i]>='0' && str[i]<='9')
            {
                state = 3;
            }
            else
            {
                state = 0;
            }
        }

    }
    else
    {
        printf("No comments are found in this string\n");

        for(i=0; i<len; i++)
        {
            if(state==1 && str[i]>='A' && str[i]<='Z')
            {
                state =1;
            }
            else if((state ==1 || state ==2) && (str[i]>='a' && str[i]<='z'))
            {
                state = 2;
            }
            else if( state==2 && str[i]>='0' && str[i]<='9')
            {
                state = 3;
            }
            else
            {
                state = 0;
            }
        }

    }


    if(state == 2 || state == 3 )
    {
        printf("String Accepted!!!\n");
    }
    else
    {
        printf("String Rejected!!!\n");
    }


    return 0;
}

