#include <stdio.h>
#include <stdlib.h>
struct emp{
int age;
int id;
char name [100];
};

int main()
{
    int size,i;
    scanf("%d",&size);
    struct emp* ptr=(struct emp*) malloc(size*sizeof(struct emp));
    if (ptr!=NULL){
        for(i=0;i<size;i++){
            scanf("%d",&ptr[i].age);
            scanf("%d",&ptr[i].id);
            scanf("%s",ptr[i].name);
        }
        for(i=0;i<size;i++)
            printf("\n %d %d %s",ptr[i].age,ptr[i].id,ptr[i].name);



    }

    return 0;
}
