#include <stdio.h>
#include <stdlib.h>
void Sawp(int *a,int *b);
int main()
{
    int a=5, b=9;
    Swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}

void Swap(int *x,int *y){

int temp= *x;
   *x= *y;
   *y=temp;



}
