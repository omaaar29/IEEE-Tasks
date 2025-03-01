//prob 2
 #include <stdio.h>

 int main()
 {
 int x;
 printf("Enter the starting number:");
 scanf(" %d", &x);
 
 for(; x>=0;x--)
 {
       printf("%d\n",x);
 }
 }

//prob 5
#include <stdio.h>

int main()
{
int x;
printf("Enter the starting number:");
scanf(" %d", &x);

for(; x>=0;x--)
{
      if(x % 2 !=0)
      {
            printf("%d\n",x);
      }
}
}

// prob 6
#include <stdio.h>

int main()
{
int x,sum;
printf("Enter the upper limit:");
scanf(" %d", &x);

sum = 0;

for(;x>=1 ;x--)
{
      sum = sum + x;
}
printf("%d",sum);
}

//prob 9
#include <stdio.h>

int main()
{
int x,multi;
printf("ُEnter the number:");
scanf(" %d", &x);

for(int i=10;i>=1 ;i--)
{
      multi = i * x;
      printf("%d * %d = %d\n",x,i,multi);
}
}
//prob 10
#include <stdio.h>

int main()
{
float x,i,digits;

printf("ُEnter the number:");
scanf(" %f", &x);

while (x>=1)
{
      i=10;
      x=x/i;
      
      digits++;


}
printf("digits:%0.2f",digits);
}
// prob 15
#include <stdio.h>

int main()
{
int x,i;
float product;
printf("ُEnter the number:");
scanf(" %d", &x);
product=1;
while (x>=1)
{
      i=x%10;
      x=x/10;
     product = product * i;


}
printf("product:%0.2f",product);
}
// prob 16
#include <stdio.h>

int main()
{
int x,i;
printf("ُEnter the number:");
scanf(" %d", &x);

while (x>=1)
{
      i=x%10;
      x=x/10;
      printf("%d",i);


}

}
//prob 21
#include <stdio.h>

int main()
{
int x,i,y,result;
printf("ُEnter the base:");
scanf(" %d", &x);
printf("ُEnter the power:");
scanf(" %d", &i);
result = 1;
y=i;
for(;i>=1;i--)
{

      result = result * x;

}
printf("%d^%d=%d",x,y,result);
}
//prob 40
#include <stdio.h>
#include <math.h>

int main()
{
int x,i,y,result;
printf("ُEnter the binary number:");
scanf(" %d", &x);
result=0;
i=0;
for(;i<4;i++)
{
      while(x>0)
      {
                  y=x%10;
                  x=x/10;
                 
            
            if(y%2!=0)
              {
                  result= result + pow(2,i);
                  i++;
            }
            else
            {
                  i++;
            }
      }

}
printf("your decmal number is:%d",result);
}
