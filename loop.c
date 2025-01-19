#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("This is line %d\n", i + 1);
    }
    return 0;
}