#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    float S = 0;
    for(int i = 1; i <= n; i++){
        S += 1.0 / (i * (i + 1));
    }
    printf("%.2f", S);

    return 0;
}