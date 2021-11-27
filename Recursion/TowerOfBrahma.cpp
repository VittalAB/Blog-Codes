// Coder :- VittalAB 

#include<bits/stdc++.h>
using namespace std;


void TOB(int n,char Frompeg,char Topeg,char Auxpeg){
    if(n==1){                                                       // terminating  condition
        cout << "Move " << n <<  " from " << Frompeg << " to " << Topeg << endl; // if we have only one disk move from source to destination bar directly
        return;
    }
    TOB(n-1,Frompeg,Auxpeg,Topeg); // Move n-1 disks from frompeg to auxpeg using topeg as auxillary
    cout << "Move " << n <<  " from " << Frompeg << " to " << Topeg << endl; 
    TOB(n-1,Auxpeg,Topeg,Frompeg); // Move n-1 disks from auxpeg to topeg using frompeg as auxillary

}
int main(){

    cout << "Enter number of disks to be moved \n";
    int n;
    cin >> n;
    TOB(n,'A','C','B');
    return 0;
}

// Note :- Assumption is there are only 3 bars for transferring the disks 
// Time complexity :- O(2^n) Exponential Time Complexity
// Number of moves :- 2^n-1 
