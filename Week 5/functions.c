// prob 1
#include <stdio.h>

int Cube (int x)
{
    int cube = x * x * x;
    return cube;

}

int main()
{
    int x;
    printf("Enter your number:");
    scanf("%d",&x);

    int cube = Cube(x);
    printf ("Cube of %d is: %d",x,cube);
    

}

// prob 2 
#include <stdio.h>

double Diameter (double);
double Circumference (double, const double *pi);
double Area (double, const double *pi);

int main()
{
    const double pi = 3.141592;
    double radius;

    printf("Enter your radius:");
    scanf("%lf",&radius);

    double diameter = Diameter(radius);
    double circumference = Circumference(radius , &pi );
    double area = Area(radius, &pi);

    printf("your diameter is:%0.2lf\nyour circumference is:%0.2lf\nyour area is:%0.2lf", diameter , circumference , area );

    return 0;
}

double Diameter (double a)
{
    double diameter = a * 2;
    return diameter;
}

double Circumference (double a, const double *pi)
{
    double circumference = *pi  * 2 * a;
    return circumference;
}

double Area (double a, const double *pi)
{
    double area = *pi * a * a  ;
    return area; 
}

//prob 3

