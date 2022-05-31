#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int sec;
    scanf("%i", &sec);
    
    while (sec>=43200){
        sec=sec-43200;
    }
    
    int h=sec/3600, m=(sec-h*3600)/60 , s=sec-h*3600-m*60;
    /* h=hours, m=minutes, s=seconds */
    
    int h_a=h*360.0/12.0, m_a=m*360.0/60.0, s_a=s*360.0/60.0;
    /* h_a=hours angle , m_a= minutes angle , s_a= seconds angle */
    
    
    
    printf ("%i\n%i\n%i", h_a, m_a, s_a);
    
    return 0;
}
