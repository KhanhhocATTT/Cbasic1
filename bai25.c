#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a <= 0 || b <= 0 || c <= 0) return 0;
    if(a + b > c || a + c > b || c + b > a) printf("YES");
    else printf("NO");

    return 0;
}