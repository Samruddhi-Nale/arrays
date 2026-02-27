#include<stdio.h>
void rev(int n, int arr[n]){
    for (int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    return;
}
int main(){
    int n;
    printf("Enter size of arrays:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of arrays:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    rev(n, arr);
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}