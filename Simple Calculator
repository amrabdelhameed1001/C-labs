#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char op;
    int a,b;

    scanf("%i %c %i",&a, &op, &b);
    switch(op)
    {
        case '+':
            printf("%d + %d = %d",a, b, a+b);
        break;
        case '-':
            printf("%d - %d = %d",a, b, a-b);
        break;
        case '*':
            printf("%d * %d = %d",a, b, a*b);
        break;
        case '/':
            if (b==0){
                    printf("ERROR: Division by zero is not allowed!");
                    break;
            }

            else{
                printf("%d / %d = %d",a,b, a/b);
            }
            break;
        case '%':
            if (b==0){
                    printf("ERROR: Division by zero is not allowed!");
                    break;
            }
            else{
                printf("%d %% %d = %d",a,b,a%b);
            }
            break;
        default:
            printf("ERROR: Unsupported Operator!");
     }
     return 0;
}
