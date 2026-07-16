include <stdio.h>

void swap(int *a, int *b){
       int temp;
       temp = *a;
       *a = *b;
       *b = temp;
    
}
     int main() {
         int x, y;
         
     printf("2 number daalo: ");
     scanf("%d %d", &x, &y);
     
     printf("swap se phele: x = %d, y = %d\n", x, y);
     
     swap(&x, &y);
     
     printf("swap ke baad: x = %d, y = %d", x, y);
     
     return 0;
}