
/*

Write a function called that takes a string of parentheses, and determines if the order of the parentheses is valid. The function should return true if the string is valid, and false if it's invalid.

Examples
"()"              =>  true
")(()))"          =>  false
"("               =>  false
"(())((()())())"  =>  true
Constraints
0 <= input.length <= 100

Along with opening (() and closing ()) parenthesis, input may contain any valid ASCII characters. Furthermore, the input string may be empty and/or not contain any parentheses at all. Do not treat other forms of brackets as parentheses (e.g. [], {}, <>).

*/

// Important here to check is whether the status becomes
// negative or not.
// If it becomes negative it means that the paranthesis are unbalanced
// and there is no way for it to become balanced again
// we can check it in the loop and break the loop too

#include <stdbool.h>

bool validParentheses(const char* strin) {
  int status = 0;
  
  while (*strin)
  {
    if (*strin == '(')
      status++;
    if (*strin == ')')
      status--;
    
    if (status < 0)
      return false;
    
    strin++;
  }
  
  return !status;
}

// This is a shorter solution to the same problem
bool validParentheses2(const char* strin) {
  int c = 0;
  
  while (*strin && c >= 0)
  {
    c += (*strin == '(') - (*strin == ')');
    strin++;
  }
  
  return !c;
}
