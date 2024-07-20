#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int c = ((a / b) + 1) * b;
    if(a % b == 0) printf("%d", a);
    else printf("%d", c);

    return 0;
}