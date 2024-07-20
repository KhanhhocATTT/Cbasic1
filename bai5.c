#include <stdio.h>
#include <math.h>

int main(){
    int r;
    scanf("%d", &r);
    float cv, dt;
    cv = r*2*3.14;
    dt = r*r*3.14;
    printf("%.2f %.2f", cv, dt);

    return 0;
}