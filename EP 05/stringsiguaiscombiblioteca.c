#include<stdio.h>
#include<string.h>

int main(){
    char txt1[20], txt2[20];

    printf("Digite o primeiro texto:");
    gets(txt1);
    printf("Digite o segundo texto:");
    gets(txt2);

    if(strcmp(txt1, txt2) == 0){
        printf("Sim");
    }else{
        printf("Nao");
    }

    return 0;
}