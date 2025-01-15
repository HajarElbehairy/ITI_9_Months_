#include <stdio.h>

struct complex {
    int real;
    int img;
};

int main() {
    struct complex num = {3, 4};
    printf("%.2f\n", num.real);
    printf("%.2f\n", num.img);
    return 0;
}
