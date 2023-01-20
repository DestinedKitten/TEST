#include <stdio.h>

int main(void) {
    int student;
    int candies;
    int first;
    int result;
    
    scanf ("%d %d %d", &student, &candies, &first);
    result = first;
    
    for(int i=0; i<candies-1; i++){
        if(result == student){
            result = 1;
        }else{
            result++;
        }
    }
    
    printf ("%d\n", result);
    
    return 0;
}
