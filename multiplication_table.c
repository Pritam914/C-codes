#include<stdio.h>
int main(){
    //take input from user
    int n;
    printf("enter the number whose multiplication table you want:");
    scanf("%d",&n);
    for(int i=0;i<10; i++){
        printf("%d X %d = %d\n",n,i+1,(i+1)*n);
    }
 return 0;
}