#include<stdio.h>
#include<limits.h>
int main(){
   int arr[7];
   int min = INT_MAX;
   printf("Enter 7 elements:");
   for(int i=0; i<=6; i++){
    scanf("%d",&arr[i]);
   }
   for(int i=0; i<=6; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
   printf("Minimum value of an element is %d\n",min);
   return 0;
}