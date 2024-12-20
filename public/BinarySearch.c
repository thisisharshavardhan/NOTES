#include<stdio.h>


int binarysearch(int arr[],int target,int low,int high){
    if(low < high){
        int mid = low+high/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            return binarysearch(arr,target,low,mid-1);
        }
        else if(arr[mid] < target){
            return binarysearch(arr,target,mid,high);
        }
    }
    else{
        return -1;
    }
}
int main(){
    int length,target,result = 0;
    printf("Enter the length of array: ");
    scanf("%d",&length);
    int arr[length];
    for(int i=0;i<length;i++){
        printf("Enter the %d element: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the target element to search: ");
    scanf("%d",&target);
    result = binarysearch(arr,target,0,length);
    if(result == -1){
        printf("\nElement not found\n");
    }
    else{
        printf("\nElement found at %d index",result);
    }
    return 0;
}