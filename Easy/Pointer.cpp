// QU : The function is declared with a void return type, so there is no value to return. Modify the values in memory so that a contains their sum and b contains their absolute difference.
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    int sum = *a + *b;
    int diff = *a - *b;  
    *a = sum;
    *b = (diff > 0) ? diff : -diff ;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
