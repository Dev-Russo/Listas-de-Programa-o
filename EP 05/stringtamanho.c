#include<stdio.h>

int main()
{
    int i, j;
    char txt[50];

    printf("Digite alguma palavra/frase:\n");
    gets(txt);

    for(i = 0; txt[i] != '\0'; i++){
        j = i+1;
    }
    gets(txt);
    printf("A palvara digitada acima tem:\n %d", j);

    return 0;
}