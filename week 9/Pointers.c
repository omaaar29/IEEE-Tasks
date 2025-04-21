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