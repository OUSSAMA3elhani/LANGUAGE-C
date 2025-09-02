#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[4] ,r;
    for(int i=0;i<4;i++){
    printf("Donner le chiffre %d : ",i+1);
    scanf("%d",&T[i]);
    }
    for(int i=0 ;i<2;i++ ){
    r=T[i];
    T[i]=T[3-i];
    T[3-i]=r;
    }
    for(int i=0;i<4;i++){
    printf("%d",T[i]);
    }
    return 0;
}
