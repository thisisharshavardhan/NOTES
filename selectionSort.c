#include<stdio.h>

void sort(int arr[],int length){
    int min_index = 0;
    for(int i = 0;i<length-1;i++){
        min_index = i;
        for(int j = i+1;j<length;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
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
    sort(arr,length);
    printf("Sorted array is: ");
    for(int i = 0;i<length;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}