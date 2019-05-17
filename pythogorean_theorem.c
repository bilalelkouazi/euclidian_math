#include <stdio.h>
#include <math.h>
int main() {
double a;
double b;

printf("Give variable A: ");
scanf("%lf", &a);

printf("Give variable B: ");
scanf("%lf", &b);

double c=a*a+b*b;
printf("Squared A: %lf\nSquared B: %lf\nEquals %lf which is C squared\nTherefore C equals %lf\n", a*a, b*b, a*a+b*b, sqrt(c));

return 0;
/*
Ask a
Ask b
a²+b²=c²
square c
exit
*/
}
