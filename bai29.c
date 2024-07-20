#include <stdio.h>
#include <math.h>

int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    for(int i = a; i <= b; i++){
        printf("%d", i);
    }

    return 0;
}