#include<stdio.h>

void exclamacao(int x){
    int i,j;
    char a, mat[100][100];

    for(i = 0; i < x; i++)
    {
        for ( j = 0; j < x; j++)
        {
            if(i >= j)
            {
                mat[i][j] = '!';
            }else{
                mat[i][j] = 'a';
            }
        }   
    }

    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < x; j++)
        {
            switch (mat[i][j])
            {
            case '!':
                printf("%c", mat[i][j]);
                break;
            default:
                j++;
                printf("\n");   
                break;
            }
        }
        
    }
    
}

int main(){
    int x;

    scanf("%d", &x);
    exclamacao(x);

    return 0;
}