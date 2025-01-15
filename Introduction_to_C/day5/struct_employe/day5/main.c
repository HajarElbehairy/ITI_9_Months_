#include <stdio.h>

struct Employee {
    int id;
    int age;
    char name[100];
};

int main() {
    struct Employee emp = {1, 25, "Alice"};
    printf("ID: %d\n", emp.id);
    printf("Age: %d\n", emp.age);
    printf("Name: %s\n", emp.name);
    return 0;
}
