#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int S;
    S = a*(b+c)+b*(a+c);
    printf("%d", S);
    return 0;
}