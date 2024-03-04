#include<stdio.h>

void dobro(int x, int y, int z){

    x = x * 2;
    y = y * 2;
    z = z * 2;

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    
}

int main(){
    int x, y, z;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    dobro(x, y, z);

    return 0;
}