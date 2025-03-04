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

const double pi = 3.141592;
double Diameter (double);
double Circumference (double);
double Area (double);

int main()
{
    double radius;

    printf("Enter your radius:");
    scanf("%lf",&radius);

    double diameter = Diameter(radius);
    double circumference = Circumference(radius);
    double area = Area(radius);

    printf("your diameter is:%0.2lf\nyour circumference is:%0.2lf\nyour area is:%0.2lf", diameter , circumference , area );

    return 0;
}

double Diameter (double a)
{
    double diameter = a * 2;
    return diameter;
}

double Circumference (double a)
{
    double circumference = pi  * 2 * a;
    return circumference;
}

double Area (double a)
{
    double area = pi * a * a  ;
    return area; 


//prob 3

#include <stdio.h>

int Value(int x, int y)
{
        if (x>y)
    {
        return x;
    }
    else if (y>x)
    {
        return y;
    }
    else 
    { 
        printf("inputs are Equal\n");
    }
    return 0;
}

int main ()
{
    int x,y, value1 , value2;
    printf("Enter your first value:");
    scanf("%d",&x);

    printf("Enter your second value:");
    scanf("%d",&y);

    value1 = Value(x,y);
    if (x == value1)
    {
        value2 = y;
    }
    else
    {
        value2 = x;
    }
    
    if( value1 != 0)
    
    {
    printf("maximum is:%d\nminimum is:%d",value1,value2);
    }

    return 0;
}
//prob 6
#include <stdio.h>
void Primenumbers (int, int);
int checkprime (int);

int main()
{
    int lower , upper;
    printf("Enter your lower num:");
    scanf("%d",&lower);

    printf("Enter your upper num:");
    scanf("%d",&upper);


    printf("Prime numbers between %d-%d are:",lower,upper);
    Primenumbers(lower,upper);

    if (lower>upper)
    {
        printf("wrong input");
    }
}

void Primenumbers (int lower, int upper)
{
    
    while( lower<upper )
    {
        if (checkprime (lower))
        {
            printf("%d ", lower);
        }
        lower++;
    }
}
int checkprime (int a)
{
    int flag=1;
    for(int i = 2; i<a ;i++)
        {
            if(a%i==0)
            {
                flag = 0;
                break;
            }

        }   

    if (flag == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
// prob 8
// الاعداد 1و2و3و4و5و6و7و8 تعتبر armstrong numbers المشكله في السؤال
#include <stdio.h>
#include <math.h>
void armstrong (int,int);
int checker (int);

int main()
{
    int lower , upper;
    printf("Enter your lower num:");
    scanf("%d",&lower);

    printf("Enter your upper num:");
    scanf("%d",&upper);


    printf("armstrong numbers between %d-%d are:",lower,upper);
    armstrong(lower,upper);

    if (lower>upper)
    {
        printf("wrong input");
    }
    return 0;
}

void armstrong (int lower, int upper)
{
    
   for (int i=lower;i<upper;i++ )
    {
        if (checker (i))
        {
            printf("%d ", i);
        }
    }
}

int checker (int a)
{
    int x,sum=0;
    x=a;

    int digits=0, num;

    for (int i=a; i >=1 ; )
    {
      i/=10;
      digits++;
    }
    for (;a>=1;)
    {
        num = a%10;
        a/=10;
        sum += pow(num,digits);
    }
    if(sum == x)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
