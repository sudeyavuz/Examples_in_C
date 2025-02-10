#include <stdio.h>
#include <math.h>
int main(){
    double a;
    double b;
    double c;
    printf("first side's length: ");
    scanf("%lf",&a);
    printf("second side's length: ");
    scanf("%lf",&b);
    c = sqrt(a*a + b*b);
    printf("Hypotenuse's value:%3.lf ",c);
return 0;
}