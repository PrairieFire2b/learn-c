#include <stdio.h>

#define learn_typeof(x) _Generic(                \
    (x),                                         \
    char: char_name,                             \
    unsigned char: unsigned_char_name,           \
    short: short_name,                           \
    unsigned short: unsigned_short_name,         \
    int: int_name,                               \
    unsigned int: unsigned_int_name,             \
    long long: long_long_name,                   \
    unsigned long long: unsigned_long_long_name, \
    float: float_name,                           \
    double: double_name,                         \
    long double: long_double_name                \
)(x)                                             \
 

char* char_name() { return "char"; }

char* unsigned_char_name() { return "unsigned char"; }

char* short_name() { return "short"; }

char* unsigned_short_name() { return "unsigned short"; }

char* int_name() { return "int"; }

char* unsigned_int_name() { return "unsigned int";  
char* long_long_name() { return "long long"; }

char* unsigned_long_long_name() { return "unsigned long long"; }

char* float_name() { return "float"; }

char* double_name() { return "double"; }

char* long_double_name() { return "long double"; }
