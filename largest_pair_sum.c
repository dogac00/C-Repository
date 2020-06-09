/*

Given a sequence of numbers, find the largest pair sum in the sequence.

For example

[10, 14, 2, 23, 19] --> 42 (i.e. sum of 23 and 19)
[99, 2, 2, 23, 19]  --> 122 (i.e. sum of 99 and 23)
Input sequence contains minimum two elements and every element is an integer.

*/

// There are many solutions of course
// O(N^2) solution is traverse two arrays in two loops
// and look for the max pair sum
// O(N LOG(N)) solution is sort the array or create a new sorted
// array if you don't want to mutate the input, and then
// return the sum of last two numbers in the sorted array
// The most efficient solution is to keep two variables
// as max and secondMax and update them through a loop

using System;

public class Kata
{
  public static int LargestPairSum(int[] numbers)
  {
    int max = int.MinValue;
    int secondMax = int.MinValue;
    
    for (int i = 0; i < numbers.Length; i++) {
      if (numbers[i] > max && numbers[i] > secondMax) {
        secondMax = max;
        max = numbers[i];
      }
      else if (numbers[i] <= max && numbers[i] > secondMax) {
        secondMax = numbers[i];
      }
    }
    
    return max + secondMax;
  }
}
