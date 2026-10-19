#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char str[99];
    char sen[99];
    scanf("%c", &ch);
    scanf("%s", &str);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n",ch);
    printf("%s\n",str);
    printf("%s", sen);

    return 0;
}