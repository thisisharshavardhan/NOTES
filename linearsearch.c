#include<stdio.h>

int linearsearch(int arr[],int target,int lenght){
    for(int i = 0;i<lenght;i++){
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
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
    result = linearsearch(arr,target,length);
    if(result == -1){
        printf("\nElement not found\n");
    }
    else{
        printf("\nElement found at %d index",result);
    }
    return 0;
}