#include <stdio.h>
#include <string.h>

int main()
{
    char text[100], temp[50];
    int j = 0, i,in = 0,fl = 0,ch = 0;
    printf("Input here: ");
    gets(text);

    for (i = 0; text[i] != '\0'; i++)
    {
        temp[j++] = text[i];

        if (text[i] == ' ')
        {
            temp[j - 1] = '\0';

            if (strcmp(temp, "int") == 0)
            {
                in++;
            }

            if (strcmp(temp, "float") == 0)
            {
                fl++;
            }

            if (strcmp(temp, "char") == 0)
            {
                ch++;
            }

            j = 0;
        }

    }

    temp[j] = '\0';

    if (strcmp(temp, "char") == 0)
    {
        ch++;
    }

    if (strcmp(temp, "int") == 0)
    {
        in++;
    }

    if (strcmp(temp, "float") == 0)
    {
        fl++;
    }


    if(in>0)
    {
        printf("int is a key word. %d times found for this string\n",in);
    }
    if(fl>0)
    {
        printf("float is a key word. %d times found for this string\n",fl);
    }
    if(ch>0)
    {
        printf("char is a key word. %d times found for this string\n",ch);
    }
    if(in==0 || ch ==0 || fl == 0)
    {
        printf("No key word is found for this string.\n");
    }




    return 0;
}
