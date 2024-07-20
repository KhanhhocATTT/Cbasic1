#include <stdio.h>
#include <math.h>

int main(){
    int C;
    scanf("%d", &C);
    float F;
    F = (C * 9 / 5.0) + 32;
    printf("%.2f", F);

    return 0;
}