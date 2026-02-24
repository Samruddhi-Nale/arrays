#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of arrays:");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=n-1; i++){
        printf("%d ",arr[i]);
    }
    for(int i=0; i<=4; i++){
        sum = sum + arr[i];
    }
    printf("\nSum is %d",sum);
    return 0;
}