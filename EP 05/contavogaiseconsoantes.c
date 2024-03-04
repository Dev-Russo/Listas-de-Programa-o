#include<stdio.h>
#include<string.h>

int main(){
    int i, vog = 0, con = 0, espaco = 0,  count = 0;
    char txt[50];

    printf("Entre com o valor:\n");
    gets(txt);

    count = strlen(txt);    

    for ( i = 0; i < count; i++)
    {
        switch (txt[i])
        {
        case 'a':
            vog = vog + 1;
            break;
        case 'e':
            vog = vog + 1;
            break;
        case 'i':
            vog = vog + 1;
            break;
        case 'o':
            vog = vog + 1;
            break;
        case 'u':
            vog = vog + 1;
            break;
        case ' ':
            espaco++;
            break;
        
        default:
            con = con + 1;
            break;
        }
    }
    
    printf("Vogal:%d\n", vog);
    printf("Consoante:%d\n", con);
    printf("Espaco:%d\n", espaco);

    return 0;
}