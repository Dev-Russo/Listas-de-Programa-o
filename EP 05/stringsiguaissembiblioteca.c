#include <stdio.h>

int main(){
    char txt1[20], txt2[20];
    int i, j, k = 0;

    printf("Digite o primeiro texto:");
    gets(txt1);
    printf("Digite o segundo texto:");
    gets(txt2);


     for(i = 0; txt1[i] != '\0'; i++){
        j = i+1;
    }

     for(i = 0; txt2[i] != '\0'; i++){
        k = i+1;
    }

    if(k != j){
        printf("Nao");
    }else if(k == j){
        for (i = 0; txt1[i] == txt2[i]; i++)
        {
            if(txt1[i] != txt2[i]){
                j = j - 1;
            }
        }
    }
    
    if (j == k )
    {
        printf("Sim");
    }
       
    return 0;
}