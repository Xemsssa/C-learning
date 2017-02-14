#include <stdio.h>

int foo(int bar) {
    /* do something */
    return bar * 2;
}

int main() {
    //int n = foo(2);
    
    printf("%d", foo(2));
}