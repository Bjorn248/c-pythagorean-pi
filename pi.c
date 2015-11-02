#include <stdio.h>
#include <math.h>

double square(double b);

int main() {

    int i = 0;

    double n = 6.0;
    double s = 2.0;
    double pi = 3.0;

    while(1)
    {
        i++;
        n = n * 2.0;

        double big_opposite = s / 2.0;
        double big_adjacent = sqrt(4.0 - square( big_opposite ));
        double small_opposite = 2.0 - big_adjacent;
        s = sqrt(square( big_opposite ) + square( small_opposite ));

        if ((n * s)/4.0 == pi) {
            printf("Pi Found! with %i loops, with a polygon of %f sides\n", i, n);
            break;
        }
        pi = (n * s)/4.0;

        printf("%.*f\n", 16, pi);
    }

    return 0;
}

double square(double b)
{
    double z;
    z = b*b;
    return(z);
}
