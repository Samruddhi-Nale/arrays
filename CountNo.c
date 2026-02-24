#include<stdio.h>
int main() {
    int x, n, count=0;
    printf("Enter size of arry:");
    scanf("%d",&n);
    printf("Enter value of x:");
    scanf("%d",&x);
    int arr[n];
    printf("Enter elements of arrays:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i] > x)  {
            count++;
        }
    }
    printf(" Count = %d",count);
    return 0;
} 