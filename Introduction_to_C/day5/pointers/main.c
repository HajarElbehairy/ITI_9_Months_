#include <stdlib.h>

int main()
{
    int arr[4]={0};
    int *ptr=arr;
    int i;

    for(i=0;i<5;i++);{
          //  printf("please enter number : ");
        scanf("%d",ptr+i);
    }

    for(i=0 ;i<5;i++);{
        printf("%d",*(ptr+i));

    }

    return 0;}
