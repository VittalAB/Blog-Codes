#include<bits/stdc++.h>
using namespace std;

int main(){

    int fibo(int);
    int n;
    cout << "Enter number :- " << endl;
    cin >> n;
    cout << n << " fibo number is " << fibo(n) << endl;
    
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