#include<stdio.h>
int Max(int array[],int n){
    int max=array[0];
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;
}

int main(){
int n;
printf("enter the size of the array= ");
scanf("%d",&n);
int array[n];
printf("enter the elements of array[%d]=\t",n);
for(int i=0;i<n;i++){
scanf("%d",&array[i]);
}
printf("elements of array[%d] =\t",n);
for(int y=0;y<n;y++){
    printf("%d\t",array[y]);
}
int max = Max(array, n); // called the function by passing array and size n
printf("\nthe max element of array is %d", max);
    return 0;
}