#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int squareRoot = sqrt(num);
    return (squareRoot * squareRoot == num);
}

void countAndPrintPerfectSquares(int n) {
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    int count = 0;

    for (int i = 1; i < n; i++) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTong so chinh phuong la: %d\n", count);
}

int main() {
    int n=50;
    countAndPrintPerfectSquares(n);

    return 0;
}

