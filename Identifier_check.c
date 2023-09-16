#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char keyword[32][10] =
    {
        "auto", "double", "int", "struct", "break", "else", "long",
        "switch", "case", "enum", "register", "typedef", "char",
        "extern", "return", "union", "const", "float", "short",
        "unsigned", "continue", "for", "signed", "void", "default",
        "goto", "sizeof", "volatile", "do", "if", "static", "while"
    };

    char text[100], temp[50];
    int i, j = 0, flag = 1;

    printf("Input here: ");
    gets(text);

    for (i = 0; i < 32; i++)
    {
        if (strcmp(text, keyword[i]) == 0)
        {
            flag = 3;
            break;
        }
    }

    if (!isalpha(text[0]) && text[0] != '_')
    {
        flag = 0;
    }
    else
    {
        i = 1;
        while (text[i] != '\0')
        {
            if (!isalnum(text[i]) && text[i]!= '_')
            {
                flag = 0;
                break;
            }
            i++;
        }
    }

    if (flag == 0)
    {
        printf("Invalid Identifier\n");
    }
    else if (flag == 1)
    {
        printf("Valid Identifier\n");
    }
    else if (flag == 3)
    {
        printf("It's a keyword\n");
    }

    return 0;
}
