#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int delta;
    delta = b*b - 4*a*c;
    float x1, x2, x;

    x = -b / 2*a;
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    if(delta < 0) printf("NO");
    else if(delta = 0) printf("%.2f", x);
    else{
        printf("%.2f %.2f", x1, x2);
    }

    return 0;
}