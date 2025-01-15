#include <stdio.h>
#include <stdlib.h>
int max_number(int x,int y);

int main()
{
   int result;
   result=max_number(8,5);
   printf("%d",result);
    return 0;
}
int max_number(int x,int y){
    int num1;
    int num2;
    scanf(" %d %d",&num1,&num2);
 return num1>num2?num1:num2;
}
