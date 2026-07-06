include <stdio.h>

int main()
{
    int n, i;
    printf("kitne numbers dalne hain?");
    scanf("%d", &n);
    
    
    int arr[n];
    printf("%d numbers daalo:", n);
    for(i= 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("\noriginal Array:");
    for(i= 0; i<n; i++) {
        printf("%d", arr[i]);
    }
    
    printf("\nReversed Array:");
    for(i= n-1; i >= 0; i--) {
        printf("%d", arr[i]);
        
    }
    
    return 0;
}