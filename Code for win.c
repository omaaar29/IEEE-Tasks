// prob 4
#include <stdio.h>

int main()
{
    int x;
    
    printf("Enter x value:");
    scanf("%d",&x);

    if (x%5 ==0)
    {
        printf("your value is divisible by 5\n");
    }
    else if (x%11==0)
    {
        printf("your value is divisible by 11\n");
    } 
    else 
    {
        printf("Number is not divisible by 5 and 11 \n");
    }

    return 0;
}

//prob 7 
#include <stdio.h>

int main()
{
  char x;
  scanf("%c", &x);

  if(x>='A' && x<='Z')
  {
        printf(" your value is alphabet");        
  }
  else if (x>='a' && x<='z' )
  {
        printf(" your value is alphabet");        
  }
  else  
  {
        printf(" your value is num");        
  }
  return 0;
}

//prob 8
#include <stdio.h>

int main()
{
  char x;
  printf ("Enter the letter:\n");
  scanf("%c", &x);

  if(x == 'a')
  {
        printf(" your value is vowel");        
  }
  else if (x == 'e')
  {
        printf(" your value is vowel");        
  }
  else if(x == 'i')
  {
        printf(" your value is vowel");        
  }
  else if(x == 'o')
  {
        printf(" your value is vowel");        
  }
  else if(x == 'u')
  {
        printf(" your value is vowel");        
  }
  else
  {
        printf(" your value is consonant");        
  }
  return 0;
}

// prob 12
#include <stdio.h>

int main()
{
  int x;
  int flag = 0;

while(!flag)
{
      printf("Enter the number of the month:\n");
      scanf("%d", &x);

  if(x==1||x==3 ||x==5||x==7||x==8||x==10||x==12)
  {
        printf("31 Days\n");  
        flag=1;      
  }
  else if (x==4||x==6||x==9||x==11)
  {
        printf("30 Days\n");        
        flag=1;      
  }
  
  else if(x == 2)
  {
        printf("28 Days\n"); 
        flag=1;      
  }       
  else 
  {
      printf("wrong entered value, plz try again\n");
  }
}
  return 0;
}

//prob 14
#include <stdio.h>

int main()
{
  float x,y,z;
  
  printf("Enter the first angle:\n");
  scanf("%f",&x);
  printf("Enter the second angle:\n");
  scanf("%f",&y);
  printf("Enter the third angle:\n");
  scanf("%f",&z);

  if(x+y+z==180)
  {
      printf("The triangle is valid");
  }
  else
 {
      printf("The triangle is not valid");  
 }
  return 0;
}

// prob 16
#include <stdio.h>

int main()
{
  float x,y,z;
  
  printf("Enter the length first side:\n");
  scanf("%f",&x);
  printf("Enter the length second side:\n");
  scanf("%f",&y);
  printf("Enter the length third side:\n");
  scanf("%f",&z);

  if(x==y && y==z)
  {
      printf("the Triangle is equilateral");
  }
  else if(x==y||y==z||z==x)
  {
      printf("the Triangle is Isosceles");
  }
  else
  {
      printf("the Triangle is Scalene");
      
  }

  return 0;
}
// prob 19
#include <stdio.h>

int main()
{
      float Physics, Chemistry, Biology, Mathematics ,Computer,sum,avg;


      printf("Enter Mathematics grade:");
      scanf("%f",&Mathematics);
      printf("Enter Biology grade:");
      scanf("%f",&Biology);
      printf("Enter Chemistry grade:");
      scanf("%f",&Chemistry);
      printf("Enter Physics grade:");
      scanf("%f",&Physics);
      printf("Enter Computer grade:");
      scanf("%f",&Computer);

      sum = Physics+Chemistry+Biology+Mathematics+Computer;
      avg= (sum/500)*100;

      if (avg>=90)
      {
            printf("your grade is A");
      }
      else if (avg>=80)
      {
            printf("your grade is B");
      }
      else if (avg>=70)
      {
            printf("your grade is C");
      }
      else if (avg>=60)
      {
            printf("your grade is D");
      }
      else if (avg>=50)
      {
            printf("your grade is E");
      }
      else if (avg>=40)
      {
            printf("your grade is F");
      }
      else
      {
          printf("you failed");
      }
  
      // prob 20
      #include <stdio.h>

int main()
{     
      float basic_Salary,Gross_Salary,hra , da ;
      printf("Enter your basic salary:");
      scanf("%f",&basic_Salary);

      if(basic_Salary<= 10000)
      {
            hra = basic_Salary * 0.2;
            da = basic_Salary * 0.8;
            Gross_Salary= basic_Salary + hra + da;
            
            printf("Gross salary:%f",Gross_Salary);
      }
      else if(10001 <= basic_Salary <= 20000)
      {
            hra = basic_Salary * 0.25;
            da = basic_Salary * 0.9;
            Gross_Salary= basic_Salary + hra + da;
            
            printf("Gross salary:%f",Gross_Salary);
      }
      else  if(basic_Salary<= 10000)
      {
            hra = basic_Salary >= 0.3;
            da = basic_Salary * 0.95;
            Gross_Salary= basic_Salary + hra + da;
            
            printf("Gross salary:%0.2f",Gross_Salary);
      }
  return 0;
}