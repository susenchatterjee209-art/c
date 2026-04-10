#include<stdio.h>
int arr[10]={2,3,4,5,6,7,8,9,1};
int low=0; int high=10;
void search(int value){
    int mid=low+high/2;
    if(arr[mid]==value){
        printf("the serached element position %d",mid+1);
    }
    else if(value>arr[mid]){
        low = mid + 1;
        printf("the serached element position %d",mid+1);
    }
    else{
        high = mid-1;
    }

}
int main(){
    search(7);
    return 0;
}