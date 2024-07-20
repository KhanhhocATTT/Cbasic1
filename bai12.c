#include <stdio.h>
#include <math.h>

int main(){
    long long n;
    scanf("%lld", &n);
    int S = 0;
    for(int i = 1; i <= n; i ++){
        S += pow(-1, i)*i;
    }
    printf("%d", S);

    return 0;
}