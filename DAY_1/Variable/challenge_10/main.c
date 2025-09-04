#include <stdio.h>
#include <math.h>
int main()
{
        double radius, Volume;

        const double PI = 3.14;
        printf("please enter the radius : \n");
        scanf("%lf", &radius);

        Volume = (4.0 / 3.0) * PI * pow(radius, 3);

        printf("volume of the sphere : %lf\n", Volume);
}
