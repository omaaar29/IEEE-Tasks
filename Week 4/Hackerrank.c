//prob 1
/*
هاكر رانك حليت الاتنين مره واحده لانهم قريبين من بعض واول واحده لقيتها احسن ب سويتش فا عملتها بيها
*/
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    int x,y;
    printf("Enter the first number:");
    scanf("%d", &x);
    printf("Enter the last number:");
    scanf(" %d", &y);
    
    for(;x<=9;x++)
    {
        switch(x)
        {
            case 1:
                printf("one\n");
            break;
            case 2:
                printf("two\n");
            break;
            case 3:
                printf("three\n");
            break;
            case 4:
                printf("four\n");
            break;
            case 5:
                printf("five\n");
            break;
            case 6:
                printf("six\n");
            break;
            case 7:
                printf("seven\n");
            break;
            case 8:
                printf("eight\n");
            break;
            case 9:
                printf("nine\n");
            break;
            /*default:
                printf("Greater than 9");
            break;*/
    }
    }
    for(;x<=y;x++)
    {
        if(x%2!=0)
        {
            printf("odd\n");
        }
        else
        {
            printf("even\n");
        }
    }
    return 0;
}

//prob 2
