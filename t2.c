#include <stdio.h>
#include <math.h>

int main(){
    double r = 0;
    scanf("%lf",&r);
    if (r < 0){
        printf("n/a");
        return 1;
    }
    double v = (4.0/3.0)*M_PI*powl(r,3);
    double m = 21500*v;
    printf("%.0lf",round(m));
    return 0;
}