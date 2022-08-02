#ifndef __cplusplus
#include <stdbool.h>
#endif
#include <stdio.h>

#define learn_print_function(x) _Generic(         \
    (x),                                          \
    char: char_print,                             \
    char*: char_pointer_print,                    \
    unsigned char: unsigned_char_print,           \
    short: short_print,                           \
    unsigned short: unsigned_short_print,         \
    int: int_print,                               \
    unsigned int: unsigned_int_print,             \
    long long: long_long_print,                   \
    unsigned long long: unsigned_long_long_print, \
    float: float_print,                           \
    double: double_print,                         \
    long double: long_double_print,               \
    void*: pointer_print,                         \
    bool: bool_print                              \
)(x)

#define learn_typeof(x) _Generic(           \
    (x),                                    \
    char: char,                             \
    unsigned char: unsigned char,           \
    short: short,                           \
    unsigned short: unsigned short,         \
    int: int,                               \
    unsigned int: unsigned int,             \
    long long: long long,                   \
    unsigned long long: unsigned long long, \
    float: float,                           \
    double: double,                         \
    long double: long double                \
)

#define learn_typenameof(x) _Generic(         \
    (x),                                      \
    char: "char",                             \
    unsigned char: "unsigned char",           \
    short: "short",                           \
    unsigned short: "unsigned short",         \
    int: "int",                               \
    unsigned int: "unsigned int",             \
    long long: "long long",                   \
    unsigned long long: "unsigned long long", \
    float: "float",                           \
    double: "double",                         \
    long double: "long double"                \
)

#define learn_typenameof_function(x) _Generic(   \
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
)(x)


char* char_name() { return "char"; }

char* unsigned_char_name() { return "unsigned char"; }

char* short_name() { return "short"; }

char* unsigned_short_name() { return "unsigned short"; }

char* int_name() { return "int"; }

char* unsigned_int_name() { return "unsigned int"; }

char* long_long_name() { return "long long"; }

char* unsigned_long_long_name() { return "unsigned long long"; }

char* float_name() { return "float"; }

char* double_name() { return "double"; }

char* long_double_name() { return "long double"; }

void char_print(char x) { printf("%c", x); }

void char_pointer_print(char* x) { printf("%s", x); }

void unsigned_char_print(unsigned char x) { printf("%c", x); }

void short_print(short x) { printf("%d", x); }

void unsigned_short_print(unsigned short x) { printf("%u", x); }

void int_print(int x) { printf("%ld", x); }

void unsigned_int_print(unsigned int x) { printf("%lu", x); }

void long_long_print(long long x) { printf("%lld", x); }

void unsigned_long_long_print(unsigned long long x) { printf("%llu", x); }

void float_print(float x) { printf("%f", x); }

void double_print(double x) { printf("%f", x); }

void long_double_print(long double x) { printf("%Lf", x); }

void pointer_print(void* x) { printf("%p", x); }

void bool_print(bool x) { printf(x == true ? "true" : "false"); }
