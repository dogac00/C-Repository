/*

Your task is to make function, which returns the sum of a sequence of integers.

The sequence is defined by 3 non-negative values: begin, end, step.

If begin value is greater than the end, function should returns 0

Examples

sequence_sum (2,2,2); /* => 2   */
sequence_sum (2,6,2); /* => 12 -> 2 + 4 + 6   */
sequence_sum (1,5,1); /* => 15 -> 1 + 2 + 3 + 4 + 5   */
sequence_sum (1,5,3); /* => 5 -> 1 + 4   */
This is the first kata in the series:

1) Sum of a sequence (this kata)
2) Sum of a Sequence [Hard-Core Version]

*/

unsigned sequence_sum(unsigned start, unsigned end, unsigned step)
{
	if (start > end)
		return 0;
	if (start == end)
		return start;

	unsigned sum = 0;

	for (unsigned i = start; i <= end; i += step)
		sum += i;
	
    return sum;
}
