#include <stdio.h>

struct points {
    float x;
    float y;
};

int main() {
    struct points p = {4.5, 9.2};
    printf("x: %.2f\n", p.x);
    printf("y: %.2f\n", p.y);
    return 0;
}
