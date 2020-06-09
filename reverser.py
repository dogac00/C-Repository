
/*

Implement the reverse function, which takes in input n and reverses it. 
For instance, reverse(123) should return 321. You should do this without
converting the inputted number into a string.

*/

def reverse(n):
    rev = 0
    
    while n:
        rev = rev * 10 + n % 10
        n = int(n / 10);
    
    return rev
