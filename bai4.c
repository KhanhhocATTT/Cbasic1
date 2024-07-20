#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int tong, hieu;;
    long long tich;
    float thuong;
    tong = a + b;
    hieu = a - b;
    tich = (long long)a * b;
    thuong = a*1.0 / b;
    printf("%d %d %lld %.2f", tong, hieu, tich, thuong);

    return 0;
}