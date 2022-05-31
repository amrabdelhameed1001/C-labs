#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    double a , b , c ;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    double s , num , denom , r;
    s=(a+b+c)/2;
    
    num= a*b*c;
    
    denom= 4.0*sqrt(s*(s-a)*(s-b)*(s-c));
    
    r = num/denom;
    
    double pi=3.14159265359;
    
    double area=pi*r*r;
    
    printf("%d" , (int)area);
    
    return 0;
}
