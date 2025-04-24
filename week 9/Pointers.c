// prob 17
#include <stdio.h>
void final(float *pa,float *pt,float *pr)
{
    float final;
    final = (*pa * *pt * *pr)/100.00;

    printf("Simple Interest = %f", final);

}

int main()
{
    float p,t,r;

    printf("Enter the principle, time and rate: ");
    scanf("%f %f %f",&p ,&t ,&r);

  
    final( &p , &t , &r);


}

//prob 18
#include <stdio.h>
#include <math.h>

void final(float *pa,float *pt,float *pr)
{
    float final;
    final = *pa * pow((1+ *pr/100), *pt);

    
    printf("Simple Interest = %f", final);

}

int main()
{
    float p,t,r;

    printf("Enter the principle, time and rate: ");
    scanf("%f %f %f",&p ,&t ,&r);

  
    final( &p , &t , &r);

}