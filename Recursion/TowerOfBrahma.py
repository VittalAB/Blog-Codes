def TowerOfBrahma(n , from_peg, to_peg, aux_peg):        # terminating  condition    
    if n == 1:
        print("Move disc 1 from pole",from_peg,"to pole",to_peg)# if we have only one disk move from source to destination bar directly
        return
    TowerOfBrahma(n-1, from_peg, aux_peg, to_peg)# Move n-1 disks from frompeg to auxpeg using topeg as auxillary
    print("Move disc",n,"from pole",from_peg,"to pole",to_peg)
    TowerOfBrahma(n-1, aux_peg, to_peg, from_peg)# Move n-1 disks from auxpeg to topeg using frompeg as auxillary
 


n = int(input("Enter number of disks :- "))
TowerOfBrahma(n,'A','C','B')

# Note :- Assumption is there are only 3 bars for transferring the disks 
# Time complexity :- O(2^n) Exponential Time Complexity
# Number of moves :- 2^n-1 

# Coder : Vittal AB
