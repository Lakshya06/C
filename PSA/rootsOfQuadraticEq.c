#include <math.h>
#include <stdio.h>

int main() 
{
    float a, b, c, disc, r1, r2, rPart, iPart;
    printf("Enter coefficients: ");
    scanf("%f %f %f", &a, &b, &c);

    disc = b * b - 4 * a * c;

    if (disc > 0) {
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("r1 = %.2f and r2 = %.2f", r1, r2);
    }

    else if (disc == 0) {
        r1 = r2 = -b / (2 * a);
        printf("r1 = r2 = %.2f;", r1);
    }

    else {
        rPart = -b / (2 * a);
        iPart = sqrt(-disc) / (2 * a);
        printf("r1 = %.2f+%.2fi and r2 = %.2f-%.2fi", rPart, iPart, rPart, iPart);
    }

    return 0;
} 

