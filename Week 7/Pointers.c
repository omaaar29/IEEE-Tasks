//prob 5
#include <stdio.h>


void Copy(int len,int a[],int *copy)
{
    printf("Your copy is:");
    for(int i=0; i<len ;i++)
    {
        *copy =a[i];
        printf("%d ",*copy);
    }
}
    


int main ()
{
    int len ;
    int copy;

    printf("Enter the length of the array:");
    scanf("%d",&len);

    int a[len];
    printf("Enter the elements of the array:");
    for(int i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Your array is:");

    
    for(int n=0;n<len;n++)
    {
      printf("%d ",a[n]);
    }
    printf("\n");

    Copy(len,a,&copy);

}

//prob 6
#include <stdio.h>

int main ()
{
    int len;
    printf("Enter the length of the two arrays:\n");
    scanf("%d",&len);

    int a1[len];
    printf("Enter the elements of the first array:\n");
    for(int i1=0;i1<len;i1++)
    {
        scanf("%d",&a1[i1]);
    }

    int a2[len];
    printf("Enter the elements of the second array:\n");
    for(int i2=0;i2<len;i2++)
    {
        scanf("%d",&a2[i2]);
    }
    int i=0;

    for (;i<len;i++)
    {
    
        int* ptr=&a1[i];
        int* ptr2=&a2[i];

        int temp=*ptr2;
        *ptr2 = *ptr;
        *ptr = temp;
    }

    printf("first array after swapping\n");
    
    for(i=0;i<len;i++)
    {
        int* ptr=&a1[i];
 
        printf("%d ",*ptr);
    }
    printf("\n");
    printf("second array after swapping\n");
    
    for(i=0 ;i<len;i++)
    {
        int* ptr2=&a2[i];
        printf("%d ",*ptr2);
    }
}

//prob 7 
#include <stdio.h>

int main ()
{
    int len;
    printf("Enter the length of the array:\n");
    scanf("%d",&len);

    int a[len];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    
   
    printf("reversed array:");
    for(int i=len-1;i>=0;i--)
    {
        int* ptr=&a[i];
        printf("%d ", *ptr);

    }


   
}

//prob 8
#include <stdio.h>

int main ()
{
    int len,s;
    printf("Enter the length of the array:\n");
    scanf("%d",&len);

    int a[len];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the element you want to search:");
    scanf("%d",&s);

    for(int i=0;i<len;i++)
    {
        int *ptr=&a[i];
        if(*ptr==s)
        {
            printf("Your element %d is the number %d of the array",s,i+1);
            return 0;
        }
    }
    printf("Your elment %d doesent exist in the array",s);


   
}
//prob 11 
//skip or now 


//prob 12
//مش محتاجه pointers اوي
#include <stdio.h>

int main ()
{
    int len=0;
    char input[100];

    printf("Enter your sentence:");
    fgets(input,100,stdin);
    fflush;
    for(int i=0;i<=100;i++)
    {
        if(input[i]/10!=0)
        {
            len++;
            continue;
        }
        else if(input[i]/10000!=0)
        {
            len++;
            continue; 
        }
        else
        break;
      
    }

    printf("%d",len-1);
    
    return 0;
   
}

//prob 14
#include <stdio.h>
#include <string.h>

int main()
{

    char a[100],b[100];
    
    printf("Enter your first string:");
    fgets(a,100,stdin);
    a[strcspn(a,"\n")]='\0';
    printf("Enter your second string:");
    fgets(b,100,stdin);
    b[strcspn(b,"\n")]='\0';

    printf("Your combined string\n");
    printf("%s ",a);
    printf("%s",b);




}

//prob 16
#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    char a[100],b[100];
    
    printf("Enter your string:");
    fgets(a,100,stdin);
    
    for(int i=0;i<=100;i++)
    {
        if(a[i]/10!=0)
        {
            len++;
            continue;
        }
        else if(a[i]/10000!=0)
        {
            len++;
            continue; 
        }
        else
        break;
      
    }

    for (int i=len-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }



}