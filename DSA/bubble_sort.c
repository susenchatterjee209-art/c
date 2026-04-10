#include<stdio.h>

int main(){
    int arr[9]={2,6,3,8,4,9};
    int i,j;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
    printf("sorted array\n");
    for(int i=0;i<6;i++){
        printf("%d",arr[i]);
    }
 return 0;
    
}