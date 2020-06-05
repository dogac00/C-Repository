/*

Given two integers a and b, which can be positive or negative, find the sum of all the numbers between including them too and return it. If the two numbers are equal return a or b.

Note: a and b are not ordered!

Examples
GetSum(1, 0) == 1   // 1 + 0 = 1
GetSum(1, 2) == 3   // 1 + 2 = 3
GetSum(0, 1) == 1   // 0 + 1 = 1
GetSum(1, 1) == 1   // 1 Since both are same
GetSum(-1, 0) == -1 // -1 + 0 = -1
GetSum(-1, 2) == 2  // -1 + 0 + 1 + 2 = 2

*/

int get_sum(int a, int b) {

	if (a == b)
		return a;

	int sum = 0;
	
	if (a > b)
		for (int i = b; i <= a; i++)
			sum += i;
	else
		for (int i = a; i <= b; i++)
			sum += i;

	return sum;
}
