/*
 *
 * int -> min(16 bit)
 * long -> min(32 bit)
 * long long -> min(64 bit)
 * short -> min(16 bit) shorter than int mostly
 *
 * unsigned -> boundary different,withou symbol(+|-) bit
 *
 *		symbol	index  tail
 *
 * float  1      8      23
 * double 1      11     52
 *
 * float -> precison different (7) 2^23 = 8388608 (6 bit)
 *
 * double ->precison different (16) 2^52 = ...(16 bit)
 *
 */
