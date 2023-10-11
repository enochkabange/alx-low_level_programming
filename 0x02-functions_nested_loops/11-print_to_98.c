#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */

void print_to_98(int n) {
    if (n <= 98) {
        for (; n < 98; n++) {
            printf("%d, ", n);
        }
    } else {
        for (; n > 98; n--) {
            printf("%d, ", n);
        }
    }
    printf("98\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    print_to_98(n);
    return (0);
}
