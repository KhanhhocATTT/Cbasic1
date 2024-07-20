#include <stdio.h>
#include <math.h>

int main(){
    long long a, b, c;
    scanf("%lld %lld %lld",&a, &b, &c);

    if(a/b == c || b/c == a || a/c == b) printf("/");
    else printf("NOSOL");

    return 0;
}