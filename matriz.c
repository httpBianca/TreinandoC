#include <stdio.h>

int main (){
    int mapa[8][8];

    for(int i =0; i<8; i++){
        for(int j=0; j<8; j++){
            mapa[i][j] = 1;
        }
    }

    mapa[2][1] = 9;
    mapa[5][5] = 9;
    mapa[0][7] = 9;
    
    printf(" ");
    for(int i=0; i<8; i++){
        printf(" %c", 'A' + i);
    }
    printf("\n");

    for(int i=0; i<8; i++){
        printf("%d", i + 1);
        for(int j=0; j<8; j++){
            printf(" %d", mapa[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}


