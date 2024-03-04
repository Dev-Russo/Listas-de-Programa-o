#include<stdio.h>
#include<string.h>

int main()
{
    char txt[50];
    int count;

    printf("digite um texto:\n");
    gets(txt);

    count = strlen(txt);
    printf("%d",count);

    return 0;
}