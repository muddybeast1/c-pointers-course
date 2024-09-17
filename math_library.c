#include <stdio.h>
#include "math_library.h"

static void add(int x, int y){
    printf("add: %d\n", x+y);
}
static void sub(int x, int y){
    printf("sub: %d\n", x-y);
}
static void mul(int x, int y){
    printf("mul: %d\n", x*y);
}
static void div(int x, int y){
    printf("div: %d\n", x/y);
}

typedef void (*func_t)(int a, int b);

func_t func_lib[4] = {add, sub, mul, div};

void execute_function(int operation, int a, int b)
{
    func_lib[operation](a, b);
}

