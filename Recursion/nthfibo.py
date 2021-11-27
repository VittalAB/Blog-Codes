def nth_fibo_number(n):
    if n==1: 
        return 0     # terminating condition
    elif n==2: 
        return 1
    return nth_fibo_number(n-1)+nth_fibo_number(n-2) # recursive case to find nth fibo num


n = int(input("Enter the number :- "))

print(f"{n} fibonacci number is",nth_fibo_number(n))


'''
Coder:- VittalAB

Note :- Time Complexity of fibonacci series is O(2^n) Exponential order of growth.

'''