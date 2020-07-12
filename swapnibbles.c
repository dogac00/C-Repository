
typedef unsigned char byte;

byte swap_nibbles(byte b) {
    return b << 4 | b >> 4;
}
