#include<stdio.h>

int main(){
    char txt[20], resultado[20];
    int i, k = 0;

    printf("Entre com um valor de string:\n");
    gets(txt);

    for ( i = 0; i < 20; i++)
    {
        switch (txt[i])
        {
        case 'a':
            txt[i] = 'a';
            break;
        case 'e':
            txt[i] = 'e';
            break;
        case 'i':
            txt[i] = 'i';
            break;
        case 'o':
            txt[i] = 'o';
            break;
        case 'u':
            txt[i] = 'u';
            break;
        
        default:
            resultado[k++] = txt[i];
            break;
        }
    }

    puts(resultado);   
   
    return 0;
}