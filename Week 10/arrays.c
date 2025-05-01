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

//problem 5
#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size],x=0,largest,second_largest;
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d element of the array: ",++x);
        scanf("%d",&arr[i]);
    }

    largest=arr[0];
    for(int i=0;i<size;i++)
    {
        if(largest<arr[i])
            largest=arr[i];
    }
     second_largest=arr[0];
    for(int i=0;i<size;i++)
    {
        if(second_largest<arr[i] && arr[i]<largest)
            second_largest=arr[i];

    }
        printf("%d",second_largest);

}

//problem 8
#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr1[size],x=0,largest,second_largest;
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d element of the array: ",++x);
        scanf("%d",&arr1[i]);
    }
    int arr2[size];
    for(int i=0;i<size;i++)
    {
        arr2[i]= arr1[i]; 
    }
    printf("your main arr: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr1[i]);
    }

    printf("\nyour copied arr: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr2[i]);
    }
}

//problem 9