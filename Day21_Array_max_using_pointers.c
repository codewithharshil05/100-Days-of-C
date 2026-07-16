include <stdio.h>

int arraysum(int *arr, int size) {
    int sum =0;
    for(int i = 0; i < size; i++) {
        sum = sum + *(arr + i);
    }

    return sum;
    
}
   int main () {
       int arr[5] = {10, 20 ,30 ,40 ,50};
       int size = 5;

       int total = arraysum(arr, size);
    
    printf("Array ke elements: ");
    for(int i = 0; i < size; i++ ) {
        printf("%d ", arr[i]);
    }
       printf("\nArray ka sum = %d", total);
    
    return 0;
}
