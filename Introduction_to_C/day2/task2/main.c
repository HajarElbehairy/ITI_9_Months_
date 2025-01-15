#include <stdio.h>
#include <stdlib.h>

int main()
{
       int x , y;
    char ch ;



    scanf("%d\n", &x);

    scanf("%d\n", &y);

    scanf("%c\n", &ch);


    switch (ch)
    {
        case '+':
            printf("%d + %d = %d " ,x , y , x+y);
            break;

        case '-':
            printf("%d - %d = %d " ,x , y , x-y);
            break;

        case '*':
            printf("%d * %d = %d " ,x , y , x*y);
            break;

        case '\\':
            printf("%d \\ %d = %d " ,x , y , (float)x/y);
            break;

        default:
            printf("Invalaid");
            break;

    }

    return 0;
}
