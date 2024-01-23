#include <stdio.h>
float average(float a[], int n);
int main() {
    float a[]={6,7,8,9,5};
    int n = sizeof(a) / sizeof(a[0]);
    float avg = average(a, n);
    printf("The average of  %.2f", avg);
    return 0;
}
float average(float a[], int n) {
    int i;
    float sum = 0.0;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / n;
}