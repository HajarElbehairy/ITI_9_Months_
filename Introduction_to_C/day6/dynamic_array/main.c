#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i;
    scanf("%d",&size);
    int* ptr=(int*) malloc(size*sizeof(int));
    if (ptr!=NULL){
        for(i=0;i<size;i++)
            scanf("%d",&ptr[i]);
        for(i=0;i<size;i++)
            printf("\nptr[%d]=%d",i,ptr[i]);





    }

    return 0;
}
