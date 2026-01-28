#include <stdio.h>
void display(int arr[],int size){
    for(int i=0;i<size;i++){
       
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void deletion(int arr[],int size,int index){
    for(int i=index;i<size-1;i++){
        arr[i]= arr[i+1];
    }    
}
int main(){
    int arr[100];
    int size,index;
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter your array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the index where you wantt to delete a Element: ");
    scanf("%d",&index);
    // int arr[100]={7,8,12,27,88};
    // int size=5,index=2;
    printf("Before deletion\n");
    display(arr,size);
    deletion(arr,size,index);
    size=size-1;
    printf("After deletion\n");
    display(arr,size);

}
