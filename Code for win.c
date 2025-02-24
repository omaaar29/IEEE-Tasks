// prob 4
#include <stdio.h>
#include <math.h>
 
int main ()
{
    double length, width,Perimeter ;

    printf("Enter the width:\n");
    scanf("%lf", &width);
    printf("Enter the length:\n");
    scanf("%lf", &length);

    Perimeter = length * width;
    printf ("Perimeter = %ld",Perimeter);

    return 0;
}

//prob 7
#include <stdio.h>
 
int main ()
{
    double cm , m , km;

    printf("Enter the distance in cm:\n");
    scanf("%lf", &cm);

    m = cm /100;
    km = cm/100000;

    printf("distance in m=%0.2lf\n", m);
    printf("distance in km=%0.3lf", km);

return 0;

}