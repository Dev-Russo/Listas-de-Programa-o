#include<stdio.h>

struct pessoa
{

    char nome[21];
    float altura;
    float peso;

};

void IMC(struct pessoa p){
    float iMC;

    iMC = p.peso/(p.altura*p.altura);

    printf("A pessoa %s possui IMC igual a %.2f\n", p.nome, iMC);
}


int main(){
    int i;

    struct pessoa p[2];
    
    for ( i = 0; i < 2; i++)
    {
        
    printf("Insira o nome:\n");
    gets(p[i].nome);
    fflush(stdin);
    
    printf("Insira o altura:\n");
    scanf("%f", &p[i].altura);
    fflush(stdin);
    
    printf("Insira o peso:\n");
    scanf("%f", &p[i].peso);
    fflush(stdin);

    IMC(p[i]);
        
    }

    // for(i = 0; i < 2; i++)
    // {
        
    // }
    // printf("Insira o nome:\n");
    //     gets(p.nome);
    //     fflush(stdin);
    //     printf("Insira o altura:\n");
    //     scanf("%.2f", &p.altura);
    //     fflush(stdin);
    //     printf("Insira o peso:\n");
    //     scanf("%.2f", &p.peso);
    //     fflush(stdin);            

    // IMC(p);
    

    return 0;
}