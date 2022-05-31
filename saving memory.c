#include <stdio.h>
#include <stdlib.h>

int main() {


    int x, y;
    scanf("%d %d", &x, &y);
    char z;

    // check that y and x are valid

    if (x>=0 && x<=15 && y>=0 && y<=15){
        x=x<<4;
        z=x+y;
        printf("%d\n", z);
    }
    else{
        printf("Error");
    }




    return 0;
}
