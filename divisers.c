#include <stdio.h>

int main() {
    int n;
    printf("Enter number to display its factors: ");
    scanf("%d", &n);

    printf("The factors of %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}