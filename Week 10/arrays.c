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
#include<stdio.h>

int main()
{
    int size,x=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

   
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d element of the array: ",++x);
        scanf("%d",&arr[i]);
    }

    int arr2 [++size];
    int num_position,num;
    printf("Enter the position you want to enter your num in: ");
    scanf("%d", &num_position);

    if(num_position>size || num_position <= 0)
    {
        printf("invaild input-number");
        return 0;
    }
    printf("Enter the num you want to enter: ");
    scanf("%d",&num);


    for(int i=0;i<(num_position-1);i++)
    {
        arr2[i]= arr[i]; 
        x=i;
    }

    arr2[num_position-1]=num;

    for(int i=++x;i<size;i++)
    {
        arr2[num_position]=arr[i];
        num_position++;
    }


    printf("your new arr: ");
    for(int i=0;i<(size);i++)
    {
        printf("%d ",arr2[i]);
    }

}

//problem 13
#include<stdio.h>


int is_counted(int *p , int x , int check)
    {
        for (;x>=0;x--)
        {
            if(check==p[x])
                return 1;
        }

        return 0;
    }

int main()
{
    int size, x=0 , duplication=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

   
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d element of the array: ",++x);
        scanf("%d",&arr[i]);
    }
    int *p = arr;
    int temp_num;
    for(int x=0;x<size ; x++)
    {
        int temp_arr_element=arr[x];
        int temp_arr_position=x;

        if (is_counted(p ,--temp_arr_position,temp_arr_element))
        {
            continue;
        }
        else
        {
            for(int i=++temp_arr_position;i<size ; i++)
            {
                    
                    if(temp_arr_element == arr[i]&& is_counted(p ,(i-1),arr[i]))
                    {
                        duplication++;
                    }
            }
        }

    } 
    printf("Total number of duplicate elements = %d",duplication);
}
//prob