#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a <= 0 || b <= 0 || c <= 0) return 0;
    
    if(a + b < c || a + c < b || c + b < a) printf("INVAID");
    else if(a == b == c) printf("1");
    else if( a == b || a == c || b == c) printf("2");
    else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) printf("3");
    else printf("4");

    return 0;

}