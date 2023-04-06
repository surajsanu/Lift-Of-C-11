#include <stdio.h>
#include <string.h>
int main()
{
    char str[70], ch;
    int len;
    printf("Enter any String :\t");
    gets(str);
    printf("Enter the Character that you want to Remove :\t");
    scanf("%c", &ch);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ch)
        {
            for (int j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
            i--;
        }
    }
    printf("The final string after removing all '%c's = %s \n", ch, str);
    return 0;
}