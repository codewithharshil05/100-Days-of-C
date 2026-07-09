#include<stdio.h>

int main(){
    int n;
    float marks[50], total = 0, avg;

    printf("===== 100 Days of Code - Day 19 =====\n");
    printf("Enter number of subjects: ");
    scanf("%d", &n);

    // Input marks
    for(int i = 0; i < n; i++){
        printf("Enter marks of subject %d: ", i+1);
        scanf("%f", &marks[i]);
        total = total + marks[i];
    }

    // Calculate average
    avg = total / n;

    // Show result
    printf("\nTotal Marks = %.2f\n", total);
    printf("Average = %.2f\n", avg);

    if(avg >= 90)
        printf("Grade: A+ 🔥");
    else if(avg >= 75)
        printf("Grade: A");
    else if(avg >= 60)
        printf("Grade: B");
    else if(avg >= 40)
        printf("Grade: C");
    else
        printf("Grade: Fail");

    return 0;
}