#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double fac(double x)
{
    double i, fac = 1;
    for (i = 1; i <= x; i++)
        fac = fac * i;
    return fac;
}

int main() {

    double x, sum = 0;
    int n;
    scanf("%lf %d", &x, &n);


    x = (x * 3.14159265358979323846) / 180;

    int i, j = 1;

    for (i = 1; i <= n; i++)
    {
        
        if (i % 2 != 0)
        {
            sum = sum + pow(x, j) / fac(j);
        }
        else
            sum = sum - pow(x, j) / fac(j);
        j = j + 2;
    }
    printf("calculated %.10lf expected %.10lf", sum, sin(x));


    return 0;
}
