
#define swap_int(first, second) \
{ \
	int temp = first; \
	*(first) = *(second); \
	*(second) = temp; \
}

int main()
{
	int a = 5, b = 15;
	swap_int(&a, &b);

	int c = 25, d = 35;
	swap_int(&c, &d);
}
