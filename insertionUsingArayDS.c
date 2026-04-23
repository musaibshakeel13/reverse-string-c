
#include <stdio.h>
void display(int arr[],int size){
    for(int i=0;i<size;i++){
       
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int insertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];}
        arr[index]=element;
    
    return 1;
}

int main() {
    int arr[10];
    int size, element ,index;
    int capacity=10;
    printf("Enter sixe of array: ");
    scanf("%d",&size);
    printf("Enter  array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to insertion: ");
    scanf("%d",&element);
    printf("Enter index where you insertion: ");
    scanf("%d",&index);
    printf("before insertion ");
    display(arr,size);
    insertion(arr,size,element,element,index);
   size= size+1;
   printf("After insertion ");
    display(arr,size);
    
    return 0;
}
