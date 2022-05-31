#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int apples;
    scanf("%d" , &apples);
    printf("%d dozens and %d apples" , apples/12 , apples%12);
    return 0;
}
