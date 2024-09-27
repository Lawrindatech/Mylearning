#include <stdio.h>
int max(int x, int y) {
    return (x > y) ? x : y;
}

int max_of_four(int a, int b, int c, int d) {
    int max1 = max(a, b);
    int max2 = max(c, d);
    return max(max1, max2);
}



int main() {
    int a, b, c, d;
    printf("Input four numbers to find the greatest ");
    scanf("%d\n %d\n %d\n %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("The greatest value is %d", ans);
    
    return 0;
}