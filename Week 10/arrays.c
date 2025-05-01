// problem 1
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size];
    int x=0;
    for(int i=0;i<10;i++)
    {
        
        printf("Enter the %d element of the array: ",++x);
        scanf("%d",&arr[i]);
    
    }
    
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
}

// problem 2
#include <stdio.h>

int main()
{
    int size,x=0,sum=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    
  for(int i=0;i<size;i++)
  {
    printf("Enter the %d element of the array: ",++x);
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<size;i++)
  {
    sum+=arr[i];
  }
  printf("The sum of the array is: %d",sum);
  

}
