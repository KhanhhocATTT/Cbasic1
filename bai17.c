#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(b < 0) return 0;
    if(b % 400 == 0 || b % 4 == 0 && b % 100 != 0){
        switch(a){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31");
            break;
        case 4: case 6: case 9: case 11:
            printf("30");
            break;
        case 2:
            printf("29");
            break;       
        }
    }
    else{
        switch(a){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31");
            break;
        case 4: case 6: case 9: case 11:
            printf("30");
            break;
        case 2:
            printf("28");
            break;       
        }
    }

    return 0;
}