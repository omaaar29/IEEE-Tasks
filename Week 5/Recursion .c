// prop 12
//السؤال مكتوب بطريقه واجابته بطريقه تانيه خالص مش فاهم هو عايز ايه
#include <stdio.h>
int odd( int,int);

int main()
{
    int lower , upper,n;
    printf("Enter your lower num:");
    scanf("%d",&lower);

    printf("Enter your upper num:");
    scanf("%d",&upper);

   printf("odd Numbers from %d to %d are:",lower , upper);
   odd(lower , upper);

}

int odd ( int lower,int upper)
{
    if (lower<=upper)
    {
        if(lower%2!=0)
        {
            printf("%d ",lower);
             lower++ ;
            odd(lower,upper);
        } 
        else 
        {
            lower++;
            odd(lower,upper);
        }
    }
    else 
    {
        return 1;
    }
    return 0;

}

//prob 16
#include <stdio.h>
#include <math.h>
int palindrome (int,int,int);

int main()
{
    int newnum1,num,x,digits=-1;

    printf("Enter your num:");
    scanf ("%d",&num);
    x=num;

    for(int i = num;i>=1;)
    {
        digits++;
        i/=10;
    }

    newnum1 = palindrome(num, digits,0);

    if (x == newnum1)
    {
        printf("your number %d is palindrome",x);
    }
    else 
    {
        printf("your number %d is NOT palindrome",x);
    }
}

int palindrome (int num,int digits,int newnum)
{
  int i;
  if(num>=1)
  {
    i=num%10;
    num/=10;
    newnum= newnum + i*pow(10,digits) ;
    --digits;
    return palindrome(num,digits,newnum);

  }
  else 
  {
    return newnum;
  }

}

//prob 17
#include <stdio.h>
#include <math.h>
int sum  (int,int);

int main()
{
    int num;

    printf("Enter your num:");
    scanf ("%d",&num);
    num;


    sum(num,0);

}

int sum(int num,int sumation)
{
    int i;
    if(num>=1)
    {
        i=num%10;
        num/=10;
        sumation = sumation + i;
        return sum (num , sumation);
    }
    else 
    {
        printf("your sum is: %d ",sumation);
        return 0;
    }

}
//prob 18
#include <stdio.h>

int factorial   (int,int);

int main()
{
    int num;

    printf("Enter your num:");
    scanf ("%d",&num);
    num;


    factorial (num,1);

}

int factorial (int num,int fact)
{
    int i;
    if(num>=1)
    {
        fact = fact * num ;
        return factorial( num-1 , fact );
    }
    else 
    {
        printf("your factorial  is %d ",fact);
        return 0;
    }

}