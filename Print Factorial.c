#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,fact=1 ,number;    
    scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
    }    
    printf("%d",fact); 
    return 0;
}
