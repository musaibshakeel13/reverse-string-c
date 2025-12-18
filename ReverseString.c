#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    puts("enter your string");
    scanf("%[^\n]s",str);
    int size=0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    int j=size-1;
    for(int i=0;i<j;i++,j--){
        char tem=str[i];
        str[i]=str[j];
        str[j]=tem;
    }
    puts("the reverse string is :");
    puts(str);
    return 0;
}