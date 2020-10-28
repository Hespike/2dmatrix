#include <stdio.h>
#define N 5
#define M 2

int main(){
    int tomb[N][M];

    for(int sor = 0; sor < N; sor++){
        for(int oszlop = 0; oszlop < M; ++oszlop){
            tomb[sor][oszlop] = sor * M + oszlop + 1;
        }
    }

    for(int i=0; i<N; ++i){
        for(int j = 0; j < M; ++j){
            printf("%d\t", tomb[i][j]);
        }
        printf("\n");
    }
}