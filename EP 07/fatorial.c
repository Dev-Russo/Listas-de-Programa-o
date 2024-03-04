#include<stdio.h>

int fatorial(int n){
    
    int fat;

    for(fat = 1; n > 1; n--){
        
        fat = fat * n;
    
    }
    
    printf("\nFatorial calculado: %d", fat);
}

int main(){
    int a;

    printf("Insira um valor para o qual deseja calcular seu fatorial: ");
    scanf("%d", &a);

    fatorial(a);

    return 0;
}