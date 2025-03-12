#include<stdio.h>
int main(){
    int n;
    printf("enter the number to check:");
    scanf("%d",&n);
    int isPrime=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime=0;
        }
    }
    printf("\n");
    if(isPrime){
        printf("%d is  prime number",n);
    }else{
        printf("%d is not prime number",n);
    }
    return 0;
}