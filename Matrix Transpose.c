#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[1000][1000], t[1000][1000] , r , c , i , j;
    scanf("%d %d", &r , &c);

    for(i=0; i<r ; i++){
        for(j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            t[j][i]=a[i][j];
        }
    }

    for(i=0; i<c ; i++){
        for(j=0 ; j<r ; j++){
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
