#include <stdio.h>
#include <string.h>
int main(){
    double circumreferance;
    double area;
    const double PI = 3.14;
    double radius;
    printf("what is the radius of the circle? ");
    scanf("%lf",&radius);
    circumreferance = 2*PI*radius;
    area = PI*radius*radius;
    printf("circle's area: %.2lf\n",area);
    printf("circle's circumreference: %.2lf",circumreferance);
    return 0;
}