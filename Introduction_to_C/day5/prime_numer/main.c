
#include <stdio.h>
#include <stdlib.h>

int main()
{

int Isprime;
    int number;
    int i;
    scanf("%d",&number);


    for (int num = 2; num < number; num++){
            int Isprime=1;
    for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
               int Isprime = 0; // Not a prime number
                break; // Exit the loop
            }
        }
        }
    if (Isprime == 1) {
            printf("%d ",i);
        }



    return 0;
}


