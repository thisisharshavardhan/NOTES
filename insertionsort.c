#include<stdio.h>

void sort(int arr[],int length){
    for (int i = 1; i < length; i++)
    {
        if()
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