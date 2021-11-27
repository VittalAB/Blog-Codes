#include<stdio.h>
#include<stdlib.h>

int main(){

    int fibo(int);
    int n;
    printf("Enter number :- ");
    scanf("%d",&n);
    printf("%d fibo number is %d",n,fibo(n));
    return 0;
}
int fibo(int n){
    if(n==1){
        return 0;
    }else if(n==2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}