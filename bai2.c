#include <stdio.h>
#include <math.h>

int main(){
    int x;
    scanf("%d", &x);
    int y;
    y = pow(x, 3) + 3 * x * x + x + 1;
    printf("%d", y);

    return 0;
}