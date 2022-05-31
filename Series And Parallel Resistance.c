#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    double a,b,c,par;
    scanf("%lf %lf %lf" , &a , &b , &c);
    
    par= (1/a + 1/b + 1/c);
    printf("series %.5lf parallel %.5lf" , a+b+c , 1/par);
    return 0;
}
