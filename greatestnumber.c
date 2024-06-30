#include <stdio.h>

#define MAX_SIZE 10

int main(){
    int array[MAX_SIZE];
    for(int i=0;i<MAX_SIZE;i++){
        printf("Enter array[%d] : ",i);
        scanf("%d",&array[i]);
    }
    int max=array[0];
    int min=array[0];
    for(int i=0;i<MAX_SIZE;i++){
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    }
    printf("The greatest number is %d\n",max);
    printf("The smallest number is %d\n",min);
    return 0;
}