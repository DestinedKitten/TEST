#include <stdio.h>

int main(void) {
    int d1, m1, y1, d2, m2, y2;
    int result;
    
    scanf("%d %d %d", &d1, &m1, &y1);
    scanf("%d %d %d", &d2, &m2, &y2);
    
    if(y2 > y1){
        result = 12000;
    }else{
        if (m2 > m1){
            result = 500 * (m2 - m1);
        }else{
            if (d2 > d1){
                result = 15 * (d2 - d1);
            }
        }
    }
    
    printf ("%d\n", result);
    
    return 0;
}
