#include <stdio.h>
#include <stdlib.h>
int Factorial();


int main()
{
   int result=Factorial();
   printf("%d",result);
    return 0;
}
int Factorial(){
    int i;
    int fact=1;
    int number1;
    scanf("%d",&number1);
    for(i=1;i<=number1;i++){
            fact=fact*i;
    }
    return fact;

}
