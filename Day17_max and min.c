#include <stdio.h>

int main() {
    int n, i;
    printf("Kitne numbers dalne hain? ");
    scanf("%d", &n);

    int arr[n];
    printf("%d numbers daalo: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // pehle element ko hi min aur max maan lo
    int min = arr[0];
    int max = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }

    printf("\nSabse chota number: %d\n", min);
    printf("Sabse bada number: %d\n", max);

    return 0;
}