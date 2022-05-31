#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x,i, a=0;
    scanf("%d",&x);
    if (x==1){
        printf ("%d is not prime",x);
    }
    else if(x==2){
        printf ("%d is prime",x);
    }
    else{
        for(i=2;i<x-1;i++){
            if(x%i==0){
                printf("%d is not prime", x);
                a=1;
                break;
            }
        }
        if (a==0){
            printf("%d is prime", x);
        }
    }

    return 0;
}
