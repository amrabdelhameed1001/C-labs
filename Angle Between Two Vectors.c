#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int first_x , first_y , sec_x , sec_y;
    scanf("%i %i %i %i", &first_x , &first_y , &sec_x , &sec_y);
    
    float numinator= first_x * sec_x + first_y * sec_y;
    
    float denominator= (sqrt(pow(first_x,2)+pow(first_y,2))) * (sqrt(pow(sec_x,2)+pow(sec_y,2)));
    
    float cos_theta= numinator/denominator;
    
    float theta = acos(cos_theta);
    
    int theta_deg = theta / 3.14159265 * 180;
    
    printf ("%i" , theta_deg);

    return 0;
}
