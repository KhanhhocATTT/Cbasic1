#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n < 0) return 0;
    if(n % 400 == 0 || n % 4 == 0 && n % 100 != 0) printf("YES");
    else printf("NO");

    return 0;
}