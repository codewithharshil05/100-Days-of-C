#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Kitne numbers dalne hain? ");
    scanf("%d", &n);

    int arr[n];

    printf("%d numbers daalo: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; // sum karte jao
    }

    avg = sum / n; // average nikala

    printf("\nSum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}