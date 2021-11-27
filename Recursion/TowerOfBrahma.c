// Coder :- Vittal AB
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int num;

    printf("Enter the number of disks : ");
    scanf("%d", &num);
    void TowerOfBrahma(int num, char frompeg, char topeg, char auxpeg);
    TowerOfBrahma(num, 'A', 'C', 'B');
    return 0;
}
void TowerOfBrahma(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
        return;
    }
    TowerOfBrahma(num - 1, frompeg, auxpeg, topeg);
    printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
    TowerOfBrahma(num - 1, auxpeg, topeg, frompeg);
}


// Note :- Assumption is there are only 3 bars for transferring the disks 
// Time complexity :- O(2^n) Exponential Time Complexity
// Number of moves :- 2^n-1 
