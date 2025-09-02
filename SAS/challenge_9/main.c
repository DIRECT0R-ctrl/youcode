#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, z1, x2, y2, z2, distance;

    printf("please enter cordinates of the firs points (x1, y1, z1) :\n");
    scanf("%f %f %f", &x1, &y1, &z1);

    printf("please enter the cordinates if the second points (x2, y2, z2) :\n");
    scanf("%f %f %f", &x2, &y2, &z2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    printf("the distance between the tow points is : %f\n", distance);

    return 0;
}
