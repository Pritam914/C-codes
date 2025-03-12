#include<stdio.h>
int min(int array[],int n){
    int min=array[0];
    for(int i=0;i<n;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    return min;
}
int main(){
    int n;
    printf("enter the size of the elements:");
    scanf("%d",&n);
    printf("enter the elements of array[%d]=\n",n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("elements of array[%d]=\n\t",n);
    for(int i= 0;i<n;i++){
        printf("%d\t",array[i]);
    }
    printf("\n%d is smallest element in array[%d]",min(array,n),n);
    return 0;
}