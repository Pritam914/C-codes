#include<stdio.h>
int main(){
    //take the natural number upto which you want sum from beginig of the natural number
    printf("enter any natural number to get sum from 1 =");
    int n ,sum=0 ; // we initialize sum=0 becz it is a starting point for sum
    scanf("%d",&n);
    //sum = 1+2+3+4+..........+n
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    printf("the sum of n natural numbers=%d",sum);
    return 0;
}