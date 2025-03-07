// الحمدلله اول واحده بعد سنه
#include <stdio.h>
int series (int,int,int,int);

int main()
{
    int a,b,c,n;
    printf("Enter your num:");
    scanf("%d",&n);

    
    printf("Enter your first term:");
    scanf("%d",&a);

    printf("Enter your second term:");
    scanf("%d",&b);

    printf("Enter your third term:");
    scanf("%d",&c);

    int final_answer = series (n, a, b, c);

    printf("Final answer is: %d",final_answer);
}

int series (int n , int a , int b, int c )
{
    if ( n==1 )
        return a;
    if ( n==2 )
        return b;
    if ( n==3 )
        return c;
    
    return series(n-1 , a , b , c ) + series(n-2 , a , b , c ) + series(n-3 , a , b , c );

}

// 🤷‍♀️🤷‍♀️🤷‍♀️