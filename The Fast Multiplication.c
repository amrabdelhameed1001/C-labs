#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int x , y , z;
    scanf("%i %i",&x , &y);

    z= x << y;

    printf("%i", z);


    return 0;
}
