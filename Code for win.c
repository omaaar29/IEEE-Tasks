// prob 1
#include <stdio.h>

int main()
{
      int x;
      
      printf ("Please enter the day number:\n");
      scanf("%d",&x);

      switch (x)
      {
      case 1:
            printf("MONDAY\n");
            break;
      case 2:
            printf("TUESDAY\n");
            break;
      case 3:
            printf("WEDNESDAY\n");
            break;
      case 4:
            printf("THURSDAY\n");
            break;
      case 5:
            printf("FRIDAY\n");
            break;
      case 6:
            printf("SUNDAY\n");
            break;
      case 7:
            printf("SATURDAY\n");
            break;
            
      }

}

// prob 7
#include <stdio.h>
#include <math.h>

int main()
{
      float a,b,c,root1,root2;
      int delta;

      printf("Enter coefficient of squr x:\n");
      scanf("%f", &a);
      printf("Enter coefficient of x:\n");
      scanf("%f", &b);
      printf("Enter the absolute value:\n");
      scanf("%f", &c);
      delta = (b*b) - 4*a*c;
      
      switch (delta>0 ? 1 :(delta == 0 ? 0 : -1))
      {
            case 1:
                  root1= (-b + sqrt((b*b) - (4*a*c)))/(2*a);
                  root2= (-b - sqrt((b*b) - (4*a*c)))/(2*a);
                  printf("root1=%0.2f\nroot2=%0.2f", root1,root2);
                  break;

            case 0:
                  root1=(-b)/(2*a);     
                  root2 = root1;
                  printf("root1=%0.2f\nroot2=%0.2f", root1,root2);
                  break;

            case -1:
                  printf("no real roots"); 
                  break;
      }

      
     
            
     

}

//ptob 8
#include <stdio.h>

int main()
{
    char operator ;
    float x,num1 , num2;

    printf("please enter the operator:");
    scanf(" %c", &operator );

    printf("please enter the first number:");
    scanf(" %f", &num1 );

    printf("please enter the second number:");
    scanf(" %f", &num2);

    switch (operator )
    {
    case '-':
        x=num1 - num2;
        printf("%0.2f - %0.2f = %0.2f",num1,num2,x);
        break;
    case '+':
        x=num1 +num2;
        printf("%0.2f + %0.2f = %0.2f",num1,num2,x);
        break;
    case '/':
        x=num1 / num2;
        printf("%0.2f / %0.2f = %0.2f",num1,num2,x);
    break;
    case '*':
        x=num1 *num2;
        printf("%0.2f * %0.2f = %0.2f",num1,num2,x);
        break;
    default
        printf("wrong operator");
    }
}