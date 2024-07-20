#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float tb = (a + b + c*2 + d*3) / 7.0;

    if(tb > 8) printf("GIOI");
    else if(tb <  8 && tb >= 6.5) printf("KHA");
    else if (tb < 6.5 && tb >= 5) printf("TRUNG BINH");
    else printf("YEU");

    return 0;
     
}