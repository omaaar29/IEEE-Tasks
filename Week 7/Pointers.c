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