#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int y;
    scanf("%i", &y);

    if (y%4==0){
        if (y%100!=0){
            printf("Leap");

        }
        else if(y%400==0){
            printf("Leap");
        }
        else{
            printf("Not Leap");
        }
    }
    else{
        printf("Not Leap");

    }

    return 0;
}
