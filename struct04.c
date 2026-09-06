#include <stdio.h>
#define PI 3.1416

struct Circle {
    float r;
};

float area(struct Circle c){ return PI*c.r*c.r; }
float peri(struct Circle c){ return 2*PI*c.r; }

int main() {
    struct Circle c1,c2;
    printf("Enter radius of circle1: ");
    scanf("%f",&c1.r);
    printf("Enter radius of circle2: ");
    scanf("%f",&c2.r);

    printf("Circle1: Area=%.2f Perimeter=%.2f\n",area(c1),peri(c1));
    printf("Circle2: Area=%.2f Perimeter=%.2f\n",area(c2),peri(c2));
    return 0;
}
