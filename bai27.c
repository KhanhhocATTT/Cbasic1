#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int nam, tuan, ngay;
    nam = n / 365;
    tuan = (n-(nam*(n/365))) / 30;
    ngay = n - (nam * (n / 365) + tuan * 7);

    printf("%d %d %d", nam, tuan, ngay);

    return 0;

}