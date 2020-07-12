
int find_only_set_bit_pos(unsigned int n) {
    if (!n)
        return -1;
    
    int cnt = 0;

    while (n) {
        n >>= 1;
        ++cnt;
    }
    
    return cnt;
}

int is_power_of_two(unsigned int n) {
    return n && !(n & (n - 1));
}

int is_power_of_four(unsigned int n) {
    if (!is_power_of_two(n))
        return 0;
    
    int pos = find_only_set_bit_pos(n);

    return !(pos & 1);
}

